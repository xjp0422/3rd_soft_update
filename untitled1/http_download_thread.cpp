#include "http_download_thread.h"
#include <QFileDialog>
#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/URI.h>
#include <Poco/Exception.h>
#include <fstream>

http_download_thread::http_download_thread(QObject *parent)
{

}

void http_download_thread::run()
{

}

int http_download_thread::HttpGetFile(const QString &uri, const QString &filePath, QString &file_type)
{
    Poco::URI objUri;
    Poco::Net::HTTPClientSession objHttpCliSess;
    Poco::Net::HTTPRequest objHttpReq;
    Poco::Net::HTTPResponse objHttpRes;
    int size = 0;

    objUri = uri.toStdString();

    objHttpReq.setMethod(Poco::Net::HTTPRequest::HTTP_GET);
    objHttpReq.setURI(objUri.getPathAndQuery());
    objHttpReq.setHost(objUri.getHost());

    objHttpCliSess.setHost(objUri.getHost());
    objHttpCliSess.setPort(objUri.getPort());
    objHttpCliSess.sendRequest(objHttpReq);
    std::istream& objHttpResIs = objHttpCliSess.receiveResponse(objHttpRes);
    file_type = QString::fromStdString(objHttpRes.getContentType());

    std::streamsize ss = objHttpRes.getContentLength();

    file_lenth=ss;

    if (ss == Poco::Net::HTTPMessage::UNKNOWN_CONTENT_LENGTH) {
        throw Poco::ProtocolException(uri.toStdString());
    }

    std::ofstream objFileOs(filePath.toStdString().c_str(), std::ios::binary);
    if (objFileOs.fail()) {
        throw Poco::CreateFileException(filePath.toStdString());
    }

    while (ss-- > 0 && !objHttpResIs.eof()) {
        int dat = objHttpResIs.get();
        objFileOs.put(dat);
        size ++;

    }

    return size;
}
