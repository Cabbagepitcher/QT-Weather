#include <QContextMenuEvent>
#include<QMenu>
#include <QVBoxLayout>
#include<QDebug>
#include<QMessageBox>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include<QPainter>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "weathertool.h"


#define INCRENENT 3//温度每度变化像素
#define POINT_RADIUS 3//曲线描点大小
#define TEXT_OFFSET_X 12
#define TEXT_OFFSET_Y 12
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);//设置窗口无边框
    setFixedSize(width(),height());



    //构建右键菜单
    mExitMenu=new QMenu(this);
    mExitAct=new QAction();

    mExitAct->setText("退出");
    //mExitAct->setIcon(QIcon("://res/EXIT.svg"));

    mExitMenu->addAction(mExitAct);


    connect(mExitAct, &QAction::triggered, this, [=]() { qApp->exit(0); });

    //将控件添加到控件数组
    mWeekList<<ui->lblWeek0<<ui->lblWeek1<<ui->lblWeek2<<ui->lblWeek3<<ui->lblWeek4<<ui->lblWeek5;
    mDateList<<ui->lblDate0<<ui->lblDate1<<ui->lblDate2<<ui->lblDate3<<ui->lblDate4<<ui->lblDate5;

    mTypeList<<ui->lblType0<<ui->lblType1<<ui->lblType2<<ui->lblType3<<ui->lblType4<<ui->lblType5;
    mTypeIconList<<ui->lblTypeIcon0<<ui->lblTypeIcon1<<ui->lblTypeIcon2<<ui->lblTypeIcon3<<ui->lblTypeIcon4<<ui->lblTypeIcon5;

    mAqiList<<ui->lblQuality0<<ui->lblQuality1<<ui->lblQuality2<<ui->lblQuality3<<ui->lblQuality4<<ui->lblQuality5;

    mFxList<<ui->lblFx0<<ui->lblFx1<<ui->lblFx2<<ui->lblFx3<<ui->lblFx4<<ui->lblFx5;
    mFlList<<ui->lblFl0<<ui->lblFl1<<ui->lblFl2<<ui->lblFl3<<ui->lblFl4<<ui->lblFl5;

    mTypeMap.insert("暴雪",":/res/a-ziyuan13.svg");
    mTypeMap.insert("暴雨",":/res/a-ziyuan8.svg");
    mTypeMap.insert("暴雨到暴雪",":/res/a-ziyuan13.svg");
    mTypeMap.insert("大暴雨",":/res/a-ziyuan8.svg");
    mTypeMap.insert("大暴雨到大暴雪",":/res/a-ziyuan13.svg");
    mTypeMap.insert("大到暴雪",":/res/a-ziyuan13.svg");
    mTypeMap.insert("大到暴雨",":/res/a-ziyuan8.svg");
    mTypeMap.insert("大雪",":/res/a-ziyuan12.svg");
    mTypeMap.insert("大雨",":/res/a-ziyuan8.svg");
    mTypeMap.insert("冻雨",":/res/a-ziyuan20.svg");
    mTypeMap.insert("多云",":/res/a-ziyuan2.svg");
    mTypeMap.insert("浮尘",":/res/a-ziyuan18.svg");
    mTypeMap.insert("雷阵雨",":/res/a-ziyuan9.svg");
    mTypeMap.insert("雷阵雨伴有冰雹",":/res/a-ziyuan20.svg");
    mTypeMap.insert("霾",":/res/a-ziyuan15.svg");
    mTypeMap.insert("强沙尘暴",":/res/a-ziyuan17.svg");
    mTypeMap.insert("晴",":/res/a-ziyuan1.svg");
    mTypeMap.insert("沙尘暴",":/res/a-ziyuan19.svg");
    mTypeMap.insert("特大暴雨",":/res/a-ziyuan8.svg");
    mTypeMap.insert("雾",":/res/a-ziyuan15.svg");
    mTypeMap.insert("小到中雨",":/res/a-ziyuan7.svg");
    mTypeMap.insert("小到中雪",":/res/a-ziyuan11.svg");
    mTypeMap.insert("小雪",":/res/a-ziyuan10.svg");
    mTypeMap.insert("小雨",":/res/a-ziyuan5.svg");
    mTypeMap.insert("雪",":/res/a-ziyuan11.svg");
    mTypeMap.insert("扬沙",":/res/a-ziyuan18.svg");
    mTypeMap.insert("阴",":/res/a-ziyuan3.svg");
    mTypeMap.insert("雨",":/res/a-ziyuan6.svg");
    mTypeMap.insert("雨夹雪",":/res/a-ziyuan14.svg");
    mTypeMap.insert("阵雨",":/res/a-ziyuan7.svg");
    mTypeMap.insert("阵雪",":/res/a-ziyuan11.svg");
    mTypeMap.insert("中雨",":/res/a-ziyuan7.svg");
    mTypeMap.insert("中雪",":/res/a-ziyuan11.svg");

    mNetAccessManager = new QNetworkAccessManager(this);
    connect(mNetAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);

    //getWeatherInfo("101220401");
    getWeatherInfo("蚌埠");


    //给标签添加事件过滤器
    ui->lblHighCurve->installEventFilter(this);
    ui->lblLowCurve->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    mOffset=event->globalPos()- this ->pos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos()-mOffset);
}

// 重写父类的虚函数
// 父类中默认的实现 是忽略右键菜单事件
// 重写之后，就可以处理右键菜单
void MainWindow::contextMenuEvent(QContextMenuEvent *event){
    //弹出右键菜单
    mExitMenu->exec(QCursor::pos());

    event->accept();
}

void MainWindow::onReplied(QNetworkReply *reply)
{
    int statue_code = reply-> attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
   // qDebug()<<"operation"<<reply->operation();
   // qDebug()<<"statue_code"<<statue_code;
   // qDebug()<<"url"<<reply->url();
   // qDebug()<<"raw header"<<reply->rawHeaderList();
    if(reply->error()!=QNetworkReply::NoError||statue_code!=200){
      //  qDebug()<<reply->errorString().toLatin1().data();
        QMessageBox::warning(this,"天气","请求数据失败",QMessageBox::Ok);
    }else{
        QByteArray byteArray=reply->readAll();
       // qDebug()<<"read all"<<byteArray.data();
        parseJson(byteArray);
    }

    reply->deleteLater();
}

void MainWindow::getWeatherInfo(QString cityName)
{
    QString cityCode=WeatherTool::getCityCode(cityName);
    if(cityCode.isEmpty()){
        QMessageBox::warning(this,"天气","输入错了啊",QMessageBox::Ok);
        return;
    }
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+cityCode);
    mNetAccessManager->get(QNetworkRequest(url));
}

void MainWindow::parseJson(QByteArray &byteArray)
{
    QJsonParseError err;
    QJsonDocument doc =QJsonDocument::fromJson(byteArray,&err);
    if(err.error!=QJsonParseError::NoError){return;}

    QJsonObject rootObj=doc.object();
   // qDebug()<<rootObj.value("message").toString();

    //1.解析日期城市
    mToday.date= rootObj.value("date").toString();
    mToday.city = rootObj.value("cityInfo").toObject().value("city").toString();

    //2.解析yesterday
    QJsonObject objData=rootObj.value("data").toObject();
    QJsonObject objYesterday = objData.value("yesterday").toObject();

    mDay[0].week = objYesterday.value("week").toString();
    mDay[0].date = objYesterday.value("ymd").toString();
    mDay[0].type =objYesterday.value("type").toString();

    QString s;
    s=objYesterday.value("high").toString().split(" ").at(1);
    s=s.left(s.length()-1);
    mDay[0].high=s.toInt();

    s=objYesterday.value("low").toString().split(" ").at(1);
    s=s.left(s.length()-1);
    mDay[0].low=s.toInt();

    //风向风力
    mDay[0].fx=objYesterday.value("fx").toString();
    mDay[0].fl=objYesterday.value("fl").toString();

    mDay[0].aqi=objYesterday.value("aqi").toDouble();

    //3.解析for cast中5天数据
    QJsonArray forecastArr= objData.value("forecast").toArray();
    for(int i=0;i<5;i++){
        QJsonObject objForecast =forecastArr[i].toObject();
        mDay[i+1].week=objForecast.value("week").toString();
        mDay[i+1].date=objForecast.value("ymd").toString();
        mDay[i+1].type=objForecast.value("type").toString();

        QString s;
        s=objForecast.value("high").toString().split(" ").at(1);
        s=s.left(s.length()-1);
        mDay[i+1].high=s.toInt();

        s=objForecast.value("low").toString().split(" ").at(1);
        s=s.left(s.length()-1);
        mDay[i+1].low=s.toInt();

        mDay[i+1].fx=objForecast.value("fx").toString();
        mDay[i+1].fl=objForecast.value("fl").toString();

        mDay[i+1].aqi=objForecast.value("aqi").toDouble();
    }
    //4.解析今天数据
    mToday.ganmao =objData.value("ganmao").toString();
    mToday.wendu =objData.value("wendu").toString().toDouble();////


    mToday.shidu =objData.value("shidu").toString();
    mToday.pm25 =objData.value("pm25").toDouble();
    mToday.quality =objData.value("quality").toString();
    //5.forcast第一个也是今天的数据
    mToday.type = mDay[1].type;
    mToday.fx = mDay[1].fx;
    mToday.fl = mDay[1].fl;
    mToday.high = mDay[1].high;
    mToday.low = mDay[1].low;

    //6.ui
    updateUI();

    ui->lblHighCurve->update();
    ui->lblLowCurve->update();
}

void MainWindow::updateUI()
{
    //1日期城市
    ui->lblDate->setText(QDateTime::fromString(mToday.date,"yyyyMMdd").toString("yyyy/MM/dd")+" "+mDay[1].week);
    ui->lblCity->setText(mToday.city);
    //2.今天
    ui->lblTypeIcon->setPixmap(mTypeMap[mToday.type]);
    //int wd=mToday.wendu;
    //qDebug()<<"123"<<mToday.wendu;
    //ui->lblTemp->setText(mToday.wendu);
    ui->lblTemp->setText(QString::number(mToday.wendu)+"°");
   // ui->lblTemp->setText(QString::number(wd));


    ui->lblLowHigh->setText(QString::number(mToday.low)+"~"+QString::number(mToday.high)+"°C");
    ui->lblGanMao->setText("感冒指数： "+mToday.ganmao);
    ui->lblWindFx->setText(mToday.fx);
    ui->lblWindFl->setText(mToday.fl);

    ui->lblPM25->setText(QString::number(mToday.pm25));

    ui->lblShiDu->setText(mToday.shidu);
    ui->lblQuality->setText(mToday.quality);

    //3.六天
    for(int i=0;i<6;i++){
        mWeekList[i]->setText("周"+mDay[i].week.right(1));
        ui->lblWeek0->setText("昨天");
        ui->lblWeek1->setText("今天");
        ui->lblWeek2->setText("明天");




        QStringList ymdList=mDay[i].date.split("-");
        mDateList[i]->setText(ymdList[1]+"/"+ymdList[2]);

        mTypeList[i]->setText(mDay[i].type);
        mTypeIconList[i]->setPixmap(mTypeMap[mDay[i].type]);
mTypeIconList[i]->setScaledContents(true);
        if(mDay[i].aqi>=0&&mDay[i].aqi<=50){
            mAqiList[i]->setText("优");
            mAqiList[i]->setStyleSheet("background-color: rgb(121,184,0);");
        }
        else if(mDay[i].aqi>50&&mDay[i].aqi<=100){
            mAqiList[i]->setText("良");
            mAqiList[i]->setStyleSheet("background-color: rgb(255,187,23);");
        }
        else if(mDay[i].aqi>100&&mDay[i].aqi<=150){
            mAqiList[i]->setText("轻度");
            mAqiList[i]->setStyleSheet("background-color: rgb(255,87,97);");
        }
        else if(mDay[i].aqi>150&&mDay[i].aqi<=200){
            mAqiList[i]->setText("中度");
            mAqiList[i]->setStyleSheet("background-color: rgb(235,17,27);");
        }
        else if(mDay[i].aqi>200){
            mAqiList[i]->setText("重度");
            mAqiList[i]->setStyleSheet("background-color: rgb(110，0，0);");
        }

        //风力风向
        mFxList[i]->setText(mDay[i].fx);
        mFlList[i]->setText(mDay[i].fl);

    }
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(watched==ui->lblHighCurve&&event->type()==QEvent::Paint){
        paintHighCurve();
    }
    if(watched==ui->lblLowCurve&&event->type()==QEvent::Paint){
        paintLowCurve();
    }
    return QWidget::eventFilter(watched,event);
}

void MainWindow::paintHighCurve()
{
    QPainter painter(ui->lblHighCurve);

    //抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);
    //x坐标
    int pointX[6]={0};
    for(int i=0;i<6;i++){
        pointX[i]=mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
    }

    int tempSum = 0;
    int tempAverage =0;
    for(int i=0;i<6;i++){
        tempSum+=mDay[i].high;
    }
    tempAverage = tempSum/6;

    //y
    int pointY[6]={0};
    int yCenter = ui->lblHighCurve->height()/2;
    for(int i=0;i<6;i++){
        pointY[i] = yCenter -((mDay[i].high-tempAverage)*INCRENENT);
    }
    //绘制
    QPen pen =painter.pen();
    pen.setWidth(1);
    pen.setColor(QColor(255,170,0));

    painter.setPen(pen);
    painter.setBrush(QColor(255,170,0));
    for(int i=0;i<6;i++){
        //绘制点
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),POINT_RADIUS,POINT_RADIUS);
             //绘制文本
        painter.drawText(pointX[i]-TEXT_OFFSET_X,pointY[i]-TEXT_OFFSET_Y,QString::number(mDay[i].high)+"°");

    }
    for(int i=0;i<5;i++){
        if(i==0){
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        }else{
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(pointX[i],pointY[i],pointX[i+1],pointY[i+1]);
    }


}

void MainWindow::paintLowCurve()
{
    QPainter painter(ui->lblLowCurve);

    //抗锯齿
    painter.setRenderHint(QPainter::Antialiasing,true);
    //x坐标
    int pointX[6]={0};
    for(int i=0;i<6;i++){
        pointX[i]=mWeekList[i]->pos().x()+mWeekList[i]->width()/2;
    }

    int tempSum = 0;
    int tempAverage =0;
    for(int i=0;i<6;i++){
        tempSum+=mDay[i].low;
    }
    tempAverage = tempSum/6;

    //y
    int pointY[6]={0};
    int yCenter = ui->lblLowCurve->height()/2;
    for(int i=0;i<6;i++){
        pointY[i] = yCenter -((mDay[i].low-tempAverage)*INCRENENT);
    }
    //绘制
    QPen pen =painter.pen();
    pen.setWidth(1);
    pen.setColor(QColor(0,255,255));

    painter.setPen(pen);
    painter.setBrush(QColor(0,255,255));
    for(int i=0;i<6;i++){
        //绘制点
        painter.drawEllipse(QPoint(pointX[i],pointY[i]),POINT_RADIUS,POINT_RADIUS);
            //绘制文本
        painter.drawText(pointX[i]-TEXT_OFFSET_X,pointY[i]-TEXT_OFFSET_Y,QString::number(mDay[i].low)+"°");

    }
    for(int i=0;i<5;i++){
        if(i==0){
            pen.setStyle(Qt::DotLine);
            painter.setPen(pen);
        }else{
            pen.setStyle(Qt::SolidLine);
            painter.setPen(pen);
        }
        painter.drawLine(pointX[i],pointY[i],pointX[i+1],pointY[i+1]);
    }
}

void MainWindow::on_btnSearch_clicked()
{
    QString cityName=ui->leCity->text();
    getWeatherInfo(cityName);
}

