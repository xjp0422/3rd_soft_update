#include "config.h"

#include <QDir>
static const QString configPath=QDir::currentPath();
static const QString configFileName="/config.ini";
Config& Config::GetInstance(){
    static Config m_instance;
    return m_instance;
}


Config::Config(){
    ReadConfigFile(configPath+configFileName);
}

Config::~Config(){
}
void Config::Save(){
    WriteConfigFile(configPath+configFileName);
}
bool Config::ReadConfigFile(const QString &path){
    return true;
}

void Config::WriteConfigFile(const QString &path){
    return ;
}
