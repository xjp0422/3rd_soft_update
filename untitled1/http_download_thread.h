#ifndef HTTP_DOWNLOAD_THREAD_H
#define HTTP_DOWNLOAD_THREAD_H

#include <QObject>
#include <QThread>
class http_download_thread:public QThread
{
    Q_OBJECT
public:
    explicit http_download_thread(QObject *parent = nullptr);

signals:
    void updatestate(int);
protected:
    void run()override;
private:
    int HttpGetFile(const QString& uri, const QString& filePath, QString& file_type);
    QString uri;
    QString filePath;
    QString file_type;
};

#endif // HTTP_DOWNLOAD_THREAD_H
