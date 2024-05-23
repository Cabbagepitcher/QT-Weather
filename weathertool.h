#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H
#include<QString>
#include<QMap>
#include<QFile>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonValue>
class WeatherTool{
private:
    static QMap<QString,QString> mCityMap;

    static void initCityMap(){
        QString filePath ="D:/QTPROJETE/T/citycode.json";
        QFile file(filePath);
        file.open(QIODevice::ReadOnly| QIODevice::Text);
        QByteArray json =file.readAll();
        file.close();

        QJsonParseError err;
        QJsonDocument doc=QJsonDocument::fromJson(json,&err);
        if(err.error!=QJsonParseError::NoError){return;};

        if(!doc.isArray()){
            return;
        }
        QJsonArray cities=doc.array();
        for(int i=0;i<cities.size();i++){
            QString city= cities[i].toObject().value("cityName").toString();
            QString code= cities[i].toObject().value("cityCode").toString();
            if(code.size()>0){
                mCityMap.insert(city,code);
            }
        }
    }

public:
    static QString getCityCode(QString cityName){

        if(mCityMap.isEmpty()){
            initCityMap();
        }
        QMap<QString,QString>::iterator it=mCityMap.find(cityName);
        if(it!=mCityMap.end()){
            return it.value();
        }
        return "";
    }
};

QMap<QString,QString>WeatherTool::mCityMap={};

#endif // WEATHERTOOL_H
