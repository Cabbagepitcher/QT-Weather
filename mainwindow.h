#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMouseEvent>
#include<QLabel>

#include<QNetworkAccessManager>
#include<QNetworkReply>

#include<weatherdata.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:


    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void getWeatherInfo(QString cityCode);

    void parseJson(QByteArray& byteArray);
    void updateUI();

    //重写父类event filter方法
    bool eventFilter(QObject* watched,QEvent* event);

    //绘制高低温曲线
    void paintHighCurve();
    void paintLowCurve();

private:
    Ui::MainWindow *ui;
protected:
    void contextMenuEvent(QContextMenuEvent *event);
private slots:
    void on_btnSearch_clicked();

private:
    void onReplied(QNetworkReply* reply);
private:
    QMenu* mExitMenu;   //右键退出菜单
    QAction* mExitAct;  //退出的行为 -菜单项
    QPoint mOffset;//窗口移动，鼠标与左上角偏移

    QNetworkAccessManager* mNetAccessManager;
    void getWerterInfo(const char *);//////////


    Today mToday;
    Day mDay[6];

    //星期和日期
    QList<QLabel*> mWeekList;
    QList<QLabel*> mDateList;

    //天气和图标
    QList<QLabel*> mTypeList;
    QList<QLabel*> mTypeIconList;

    //天气指数
    QList<QLabel*> mAqiList;

    //风力风向
    QList<QLabel*> mFxList;
    QList<QLabel*> mFlList;

    QMap<QString,QString> mTypeMap;
};
#endif // MAINWINDOW_H
