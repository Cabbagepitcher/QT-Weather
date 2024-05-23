/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblTypeIcon;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblTemp;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QLabel *lblCity;
    QHBoxLayout *horizontalLayout;
    QLabel *lblType;
    QFrame *line;
    QLabel *lblLowHigh;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *leCity;
    QPushButton *btnSearch;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblDate;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer;
    QLabel *lblGanMao;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_12;
    QLabel *lblWindIcon;
    QVBoxLayout *verticalLayout_6;
    QLabel *lblWindFx;
    QLabel *lblWindFl;
    QHBoxLayout *horizontalLayout_14;
    QLabel *lblPm25Icon;
    QVBoxLayout *verticalLayout_7;
    QLabel *lblPM25Title;
    QLabel *lblPM25;
    QHBoxLayout *horizontalLayout_13;
    QLabel *lblShiDuIcon;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblShiDuTitle;
    QLabel *lblShiDu;
    QHBoxLayout *horizontalLayout_15;
    QLabel *lblQualityIcon;
    QVBoxLayout *verticalLayout_8;
    QLabel *lblQualityTitle;
    QLabel *lblQuality;
    QWidget *widget_11;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_5;
    QGridLayout *gridLayout_2;
    QLabel *lblWeek1;
    QLabel *lblDate0;
    QLabel *lblWeek2;
    QLabel *lblWeek4;
    QLabel *lblDate4;
    QLabel *lblDate3;
    QLabel *lblDate5;
    QLabel *lblDate1;
    QLabel *lblWeek5;
    QLabel *lblDate2;
    QLabel *lblWeek3;
    QLabel *lblWeek0;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QLabel *lblTypeIcon5;
    QLabel *lblType0;
    QLabel *lblType5;
    QLabel *lblTypeIcon2;
    QLabel *lblType2;
    QLabel *lblTypeIcon4;
    QLabel *lblType1;
    QLabel *lblType4;
    QLabel *lblType3;
    QLabel *lblTypeIcon3;
    QLabel *lblTypeIcon1;
    QLabel *lblTypeIcon0;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lblQuality0;
    QLabel *lblQuality1;
    QLabel *lblQuality2;
    QLabel *lblQuality3;
    QLabel *lblQuality4;
    QLabel *lblQuality5;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *lblHighCurve;
    QLabel *lblLowCurve;
    QWidget *widget_8;
    QGridLayout *gridLayout_4;
    QLabel *lblFx0;
    QLabel *lblFx1;
    QLabel *lblFx2;
    QLabel *lblFx3;
    QLabel *lblFx4;
    QLabel *lblFx5;
    QLabel *lblFl0;
    QLabel *lblFl1;
    QLabel *lblFl2;
    QLabel *lblFl3;
    QLabel *lblFl4;
    QLabel *lblFl5;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 450);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 800, 500));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/res/background.png);\n"
"}\n"
"\n"
"QLabel {\n"
"	font: 25 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"	border-radius: 4px;\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(10, 60, 341, 121));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgba(157, 133, 255, 0);\n"
"border-radius: 15px"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lblTypeIcon = new QLabel(widget_3);
        lblTypeIcon->setObjectName("lblTypeIcon");
        lblTypeIcon->setMinimumSize(QSize(110, 110));
        lblTypeIcon->setMaximumSize(QSize(110, 110));
        lblTypeIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblTypeIcon->setPixmap(QPixmap(QString::fromUtf8("res/a-ziyuan1.svg")));
        lblTypeIcon->setScaledContents(true);
        lblTypeIcon->setAlignment(Qt::AlignCenter);
        lblTypeIcon->setWordWrap(true);

        horizontalLayout_3->addWidget(lblTypeIcon);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblTemp = new QLabel(widget_3);
        lblTemp->setObjectName("lblTemp");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(50);
        font.setBold(false);
        font.setItalic(false);
        lblTemp->setFont(font);
        lblTemp->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 50pt \"Arial\";\n"
"background-color: rgba(0, 255, 255, 0);"));
        lblTemp->setScaledContents(true);
        lblTemp->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(lblTemp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 0, -1, 40);
        lblCity = new QLabel(widget_3);
        lblCity->setObjectName("lblCity");
        lblCity->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgba(255, 255, 255,0);"));
        lblCity->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lblCity);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        lblType = new QLabel(widget_3);
        lblType->setObjectName("lblType");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblType->sizePolicy().hasHeightForWidth());
        lblType->setSizePolicy(sizePolicy);
        lblType->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblType->setScaledContents(true);
        lblType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblType);

        line = new QFrame(widget_3);
        line->setObjectName("line");
        line->setMinimumSize(QSize(0, 15));
        line->setMaximumSize(QSize(16777215, 15));
        line->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line);

        lblLowHigh = new QLabel(widget_3);
        lblLowHigh->setObjectName("lblLowHigh");
        lblLowHigh->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblLowHigh->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(lblLowHigh);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(0, 0, 801, 51));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 170, 255,0);"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(15, -1, 20, -1);
        leCity = new QLineEdit(widget_4);
        leCity->setObjectName("leCity");
        leCity->setMinimumSize(QSize(200, 0));
        leCity->setMaximumSize(QSize(200, 16777215));
        leCity->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius: 4px;\n"
"padding: 1px 5px"));

        horizontalLayout_4->addWidget(leCity);

        btnSearch = new QPushButton(widget_4);
        btnSearch->setObjectName("btnSearch");
        btnSearch->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0,1);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSearch->setIcon(icon);

        horizontalLayout_4->addWidget(btnSearch);

        horizontalSpacer_3 = new QSpacerItem(309, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        lblDate = new QLabel(widget_4);
        lblDate->setObjectName("lblDate");
        lblDate->setStyleSheet(QString::fromUtf8("font: 20pt \"Arial\";\n"
"background-color: rgba(255, 255, 255,0);"));
        lblDate->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(lblDate);

        widget_10 = new QWidget(widget);
        widget_10->setObjectName("widget_10");
        widget_10->setGeometry(QRect(10, 190, 341, 241));
        verticalLayout_9 = new QVBoxLayout(widget_10);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        lblGanMao = new QLabel(widget_10);
        lblGanMao->setObjectName("lblGanMao");
        lblGanMao->setStyleSheet(QString::fromUtf8("background-color: rgba(60,6 0,6 0, 0);\n"
"padding-left: 5px;\n"
"padding-right: 5px;"));
        lblGanMao->setWordWrap(true);

        verticalLayout_9->addWidget(lblGanMao);

        widget_2 = new QWidget(widget_10);
        widget_2->setObjectName("widget_2");
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 182, 193);\n"
"border-radius: 15px"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(50);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(40, 25, 40, 25);
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        lblWindIcon = new QLabel(widget_2);
        lblWindIcon->setObjectName("lblWindIcon");
        lblWindIcon->setMinimumSize(QSize(40, 40));
        lblWindIcon->setMaximumSize(QSize(40, 40));
        lblWindIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblWindIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/FX.svg")));
        lblWindIcon->setScaledContents(true);
        lblWindIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(lblWindIcon);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        lblWindFx = new QLabel(widget_2);
        lblWindFx->setObjectName("lblWindFx");
        lblWindFx->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFx->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lblWindFx);

        lblWindFl = new QLabel(widget_2);
        lblWindFl->setObjectName("lblWindFl");
        lblWindFl->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblWindFl->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(lblWindFl);


        horizontalLayout_12->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        lblPm25Icon = new QLabel(widget_2);
        lblPm25Icon->setObjectName("lblPm25Icon");
        lblPm25Icon->setMinimumSize(QSize(40, 40));
        lblPm25Icon->setMaximumSize(QSize(40, 40));
        lblPm25Icon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblPm25Icon->setPixmap(QPixmap(QString::fromUtf8(":/res/PM2.5.svg")));
        lblPm25Icon->setScaledContents(true);
        lblPm25Icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_14->addWidget(lblPm25Icon);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        lblPM25Title = new QLabel(widget_2);
        lblPM25Title->setObjectName("lblPM25Title");
        lblPM25Title->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblPM25Title->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lblPM25Title);

        lblPM25 = new QLabel(widget_2);
        lblPM25->setObjectName("lblPM25");
        lblPM25->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblPM25->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(lblPM25);


        horizontalLayout_14->addLayout(verticalLayout_7);


        gridLayout->addLayout(horizontalLayout_14, 0, 1, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        lblShiDuIcon = new QLabel(widget_2);
        lblShiDuIcon->setObjectName("lblShiDuIcon");
        lblShiDuIcon->setMinimumSize(QSize(40, 40));
        lblShiDuIcon->setMaximumSize(QSize(40, 40));
        lblShiDuIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblShiDuIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/SD.svg")));
        lblShiDuIcon->setScaledContents(true);
        lblShiDuIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_13->addWidget(lblShiDuIcon);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lblShiDuTitle = new QLabel(widget_2);
        lblShiDuTitle->setObjectName("lblShiDuTitle");
        lblShiDuTitle->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblShiDuTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lblShiDuTitle);

        lblShiDu = new QLabel(widget_2);
        lblShiDu->setObjectName("lblShiDu");
        lblShiDu->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblShiDu->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lblShiDu);


        horizontalLayout_13->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_13, 1, 0, 1, 1);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        lblQualityIcon = new QLabel(widget_2);
        lblQualityIcon->setObjectName("lblQualityIcon");
        lblQualityIcon->setMinimumSize(QSize(40, 40));
        lblQualityIcon->setMaximumSize(QSize(40, 40));
        lblQualityIcon->setAutoFillBackground(false);
        lblQualityIcon->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));
        lblQualityIcon->setPixmap(QPixmap(QString::fromUtf8(":/res/SY.svg")));
        lblQualityIcon->setScaledContents(true);
        lblQualityIcon->setAlignment(Qt::AlignCenter);
        lblQualityIcon->setWordWrap(false);
        lblQualityIcon->setIndent(-1);

        horizontalLayout_15->addWidget(lblQualityIcon);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        lblQualityTitle = new QLabel(widget_2);
        lblQualityTitle->setObjectName("lblQualityTitle");
        lblQualityTitle->setAutoFillBackground(false);
        lblQualityTitle->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblQualityTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(lblQualityTitle);

        lblQuality = new QLabel(widget_2);
        lblQuality->setObjectName("lblQuality");
        lblQuality->setAutoFillBackground(false);
        lblQuality->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        lblQuality->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(lblQuality);


        horizontalLayout_15->addLayout(verticalLayout_8);


        gridLayout->addLayout(horizontalLayout_15, 1, 1, 1, 1);


        verticalLayout_9->addWidget(widget_2);

        widget_11 = new QWidget(widget);
        widget_11->setObjectName("widget_11");
        widget_11->setGeometry(QRect(350, 20, 451, 451));
        verticalLayout_4 = new QVBoxLayout(widget_11);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_5 = new QWidget(widget_11);
        widget_5->setObjectName("widget_5");
        widget_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(0, 200, 200, 200);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_2 = new QGridLayout(widget_5);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(6);
        gridLayout_2->setVerticalSpacing(0);
        lblWeek1 = new QLabel(widget_5);
        lblWeek1->setObjectName("lblWeek1");
        lblWeek1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek1, 0, 1, 1, 1);

        lblDate0 = new QLabel(widget_5);
        lblDate0->setObjectName("lblDate0");
        lblDate0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate0->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate0, 1, 0, 1, 1);

        lblWeek2 = new QLabel(widget_5);
        lblWeek2->setObjectName("lblWeek2");
        lblWeek2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek2, 0, 2, 1, 1);

        lblWeek4 = new QLabel(widget_5);
        lblWeek4->setObjectName("lblWeek4");
        lblWeek4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek4, 0, 4, 1, 1);

        lblDate4 = new QLabel(widget_5);
        lblDate4->setObjectName("lblDate4");
        lblDate4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate4, 1, 4, 1, 1);

        lblDate3 = new QLabel(widget_5);
        lblDate3->setObjectName("lblDate3");
        lblDate3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate3, 1, 3, 1, 1);

        lblDate5 = new QLabel(widget_5);
        lblDate5->setObjectName("lblDate5");
        lblDate5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate5, 1, 5, 1, 1);

        lblDate1 = new QLabel(widget_5);
        lblDate1->setObjectName("lblDate1");
        lblDate1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate1, 1, 1, 1, 1);

        lblWeek5 = new QLabel(widget_5);
        lblWeek5->setObjectName("lblWeek5");
        lblWeek5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek5, 0, 5, 1, 1);

        lblDate2 = new QLabel(widget_5);
        lblDate2->setObjectName("lblDate2");
        lblDate2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblDate2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblDate2, 1, 2, 1, 1);

        lblWeek3 = new QLabel(widget_5);
        lblWeek3->setObjectName("lblWeek3");
        lblWeek3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek3, 0, 3, 1, 1);

        lblWeek0 = new QLabel(widget_5);
        lblWeek0->setObjectName("lblWeek0");
        lblWeek0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblWeek0->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lblWeek0, 0, 0, 1, 1);


        verticalLayout_4->addWidget(widget_5);

        widget_6 = new QWidget(widget_11);
        widget_6->setObjectName("widget_6");
        widget_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	background-color: rgba(60, 60, 60, 100);\n"
"	border-radius: 4px;\n"
"}"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(-1, 5, -1, 5);
        lblTypeIcon5 = new QLabel(widget_6);
        lblTypeIcon5->setObjectName("lblTypeIcon5");
        lblTypeIcon5->setMaximumSize(QSize(65, 50));
        lblTypeIcon5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon5->setPixmap(QPixmap(QString::fromUtf8(":/res/a-ziyuan8.svg")));
        lblTypeIcon5->setScaledContents(true);
        lblTypeIcon5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon5, 0, 5, 1, 1);

        lblType0 = new QLabel(widget_6);
        lblType0->setObjectName("lblType0");
        lblType0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType0->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType0, 3, 0, 1, 1);

        lblType5 = new QLabel(widget_6);
        lblType5->setObjectName("lblType5");
        lblType5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType5, 3, 5, 1, 1);

        lblTypeIcon2 = new QLabel(widget_6);
        lblTypeIcon2->setObjectName("lblTypeIcon2");
        lblTypeIcon2->setMaximumSize(QSize(65, 50));
        lblTypeIcon2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon2->setPixmap(QPixmap(QString::fromUtf8(":/res/a-ziyuan2.svg")));
        lblTypeIcon2->setScaledContents(true);
        lblTypeIcon2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon2, 0, 2, 1, 1);

        lblType2 = new QLabel(widget_6);
        lblType2->setObjectName("lblType2");
        lblType2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType2, 3, 2, 1, 1);

        lblTypeIcon4 = new QLabel(widget_6);
        lblTypeIcon4->setObjectName("lblTypeIcon4");
        lblTypeIcon4->setMaximumSize(QSize(65, 50));
        lblTypeIcon4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon4->setPixmap(QPixmap(QString::fromUtf8(":/res/a-ziyuan7.svg")));
        lblTypeIcon4->setScaledContents(true);
        lblTypeIcon4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon4, 0, 4, 1, 1);

        lblType1 = new QLabel(widget_6);
        lblType1->setObjectName("lblType1");
        lblType1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType1, 3, 1, 1, 1);

        lblType4 = new QLabel(widget_6);
        lblType4->setObjectName("lblType4");
        lblType4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType4, 3, 4, 1, 1);

        lblType3 = new QLabel(widget_6);
        lblType3->setObjectName("lblType3");
        lblType3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblType3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblType3, 3, 3, 1, 1);

        lblTypeIcon3 = new QLabel(widget_6);
        lblTypeIcon3->setObjectName("lblTypeIcon3");
        lblTypeIcon3->setMaximumSize(QSize(65, 50));
        lblTypeIcon3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon3->setPixmap(QPixmap(QString::fromUtf8(":/res/a-ziyuan3.svg")));
        lblTypeIcon3->setScaledContents(true);
        lblTypeIcon3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon3, 0, 3, 1, 1);

        lblTypeIcon1 = new QLabel(widget_6);
        lblTypeIcon1->setObjectName("lblTypeIcon1");
        lblTypeIcon1->setMaximumSize(QSize(65, 50));
        lblTypeIcon1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon1->setPixmap(QPixmap(QString::fromUtf8(":/res/a-ziyuan5.svg")));
        lblTypeIcon1->setScaledContents(true);
        lblTypeIcon1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(lblTypeIcon1, 0, 1, 1, 1);

        lblTypeIcon0 = new QLabel(widget_6);
        lblTypeIcon0->setObjectName("lblTypeIcon0");
        lblTypeIcon0->setEnabled(true);
        sizePolicy.setHeightForWidth(lblTypeIcon0->sizePolicy().hasHeightForWidth());
        lblTypeIcon0->setSizePolicy(sizePolicy);
        lblTypeIcon0->setMinimumSize(QSize(0, 0));
        lblTypeIcon0->setMaximumSize(QSize(65, 50));
        lblTypeIcon0->setSizeIncrement(QSize(0, 0));
        lblTypeIcon0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblTypeIcon0->setPixmap(QPixmap(QString::fromUtf8(":/res/a-ziyuan1.svg")));
        lblTypeIcon0->setScaledContents(true);
        lblTypeIcon0->setAlignment(Qt::AlignCenter);
        lblTypeIcon0->setWordWrap(false);

        gridLayout_3->addWidget(lblTypeIcon0, 0, 0, 1, 1);


        verticalLayout_4->addWidget(widget_6);

        widget_9 = new QWidget(widget_11);
        widget_9->setObjectName("widget_9");
        horizontalLayout_11 = new QHBoxLayout(widget_9);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(-1, 5, -1, 5);
        lblQuality0 = new QLabel(widget_9);
        lblQuality0->setObjectName("lblQuality0");
        lblQuality0->setStyleSheet(QString::fromUtf8("background-color: rgb(121, 184, 0);\n"
"padding:8px;"));
        lblQuality0->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality0);

        lblQuality1 = new QLabel(widget_9);
        lblQuality1->setObjectName("lblQuality1");
        lblQuality1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 187, 23);"));
        lblQuality1->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality1);

        lblQuality2 = new QLabel(widget_9);
        lblQuality2->setObjectName("lblQuality2");
        lblQuality2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 87, 97);"));
        lblQuality2->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality2);

        lblQuality3 = new QLabel(widget_9);
        lblQuality3->setObjectName("lblQuality3");
        lblQuality3->setStyleSheet(QString::fromUtf8("background-color: rgb(235, 17, 27);"));
        lblQuality3->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality3);

        lblQuality4 = new QLabel(widget_9);
        lblQuality4->setObjectName("lblQuality4");
        lblQuality4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 0, 0);"));
        lblQuality4->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality4);

        lblQuality5 = new QLabel(widget_9);
        lblQuality5->setObjectName("lblQuality5");
        lblQuality5->setStyleSheet(QString::fromUtf8("background-color: rgb(110, 0, 0);"));
        lblQuality5->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(lblQuality5);


        verticalLayout_4->addWidget(widget_9);

        widget_7 = new QWidget(widget_11);
        widget_7->setObjectName("widget_7");
        verticalLayout_5 = new QVBoxLayout(widget_7);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, 5, -1, 5);
        lblHighCurve = new QLabel(widget_7);
        lblHighCurve->setObjectName("lblHighCurve");
        lblHighCurve->setMinimumSize(QSize(0, 80));
        lblHighCurve->setMaximumSize(QSize(10000, 10000));
        lblHighCurve->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblHighCurve->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lblHighCurve);

        lblLowCurve = new QLabel(widget_7);
        lblLowCurve->setObjectName("lblLowCurve");
        lblLowCurve->setMinimumSize(QSize(0, 80));
        lblLowCurve->setMaximumSize(QSize(10000, 10000));
        lblLowCurve->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;"));
        lblLowCurve->setScaledContents(false);
        lblLowCurve->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(lblLowCurve);

        widget_8 = new QWidget(widget_7);
        widget_8->setObjectName("widget_8");
        gridLayout_4 = new QGridLayout(widget_8);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setVerticalSpacing(0);
        lblFx0 = new QLabel(widget_8);
        lblFx0->setObjectName("lblFx0");
        lblFx0->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx0->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFx0, 0, 0, 1, 1);

        lblFx1 = new QLabel(widget_8);
        lblFx1->setObjectName("lblFx1");
        lblFx1->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFx1, 0, 1, 1, 1);

        lblFx2 = new QLabel(widget_8);
        lblFx2->setObjectName("lblFx2");
        lblFx2->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFx2, 0, 2, 1, 1);

        lblFx3 = new QLabel(widget_8);
        lblFx3->setObjectName("lblFx3");
        lblFx3->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFx3, 0, 3, 1, 1);

        lblFx4 = new QLabel(widget_8);
        lblFx4->setObjectName("lblFx4");
        lblFx4->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFx4, 0, 4, 1, 1);

        lblFx5 = new QLabel(widget_8);
        lblFx5->setObjectName("lblFx5");
        lblFx5->setStyleSheet(QString::fromUtf8("border-bottom-left-radius: 0px;\n"
"border-bottom-right-radius: 0px;"));
        lblFx5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFx5, 0, 5, 1, 1);

        lblFl0 = new QLabel(widget_8);
        lblFl0->setObjectName("lblFl0");
        lblFl0->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl0->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFl0, 1, 0, 1, 1);

        lblFl1 = new QLabel(widget_8);
        lblFl1->setObjectName("lblFl1");
        lblFl1->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFl1, 1, 1, 1, 1);

        lblFl2 = new QLabel(widget_8);
        lblFl2->setObjectName("lblFl2");
        lblFl2->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFl2, 1, 2, 1, 1);

        lblFl3 = new QLabel(widget_8);
        lblFl3->setObjectName("lblFl3");
        lblFl3->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFl3, 1, 3, 1, 1);

        lblFl4 = new QLabel(widget_8);
        lblFl4->setObjectName("lblFl4");
        lblFl4->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFl4, 1, 4, 1, 1);

        lblFl5 = new QLabel(widget_8);
        lblFl5->setObjectName("lblFl5");
        lblFl5->setStyleSheet(QString::fromUtf8("border-top-left-radius: 0px;\n"
"border-top-right-radius: 0px;\n"
"color: rgb(240, 240, 240);"));
        lblFl5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(lblFl5, 1, 5, 1, 1);


        verticalLayout_5->addWidget(widget_8);


        verticalLayout_4->addWidget(widget_7);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lblTypeIcon->setText(QString());
        lblTemp->setText(QCoreApplication::translate("MainWindow", "100\302\260", nullptr));
        lblCity->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254", nullptr));
        lblType->setText(QCoreApplication::translate("MainWindow", "\346\231\264\350\275\254\345\244\232\344\272\221", nullptr));
        lblLowHigh->setText(QCoreApplication::translate("MainWindow", "19\302\260~31\302\260", nullptr));
        leCity->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\237\216\345\270\202", nullptr));
        btnSearch->setText(QString());
        lblDate->setText(QCoreApplication::translate("MainWindow", "2023/03/15 \346\230\237\346\234\237\345\233\233", nullptr));
        lblGanMao->setText(QCoreApplication::translate("MainWindow", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\204\277\347\253\245\343\200\201\350\200\201\345\271\264\344\272\272\345\217\212\345\277\203\350\204\217\343\200\201\345\221\274\345\220\270\347\263\273\347\273\237\347\226\276\347\227\205\346\202\243\350\200\205\344\272\272\347\276\244\345\272\224\345\207\217\345\260\221\351\225\277\346\227\266\351\227\264\346\210\226\351\253\230\345\274\272\345\272\246\346\210\267\345\244\226\351\224\273\347\202\274", nullptr));
        lblWindIcon->setText(QString());
        lblWindFx->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblWindFl->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblPm25Icon->setText(QString());
        lblPM25Title->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        lblPM25->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        lblShiDuIcon->setText(QString());
        lblShiDuTitle->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        lblShiDu->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        lblQualityIcon->setText(QString());
        lblQualityTitle->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        lblQuality->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblWeek1->setText(QCoreApplication::translate("MainWindow", "\344\273\212\345\244\251", nullptr));
        lblDate0->setText(QCoreApplication::translate("MainWindow", "01/01", nullptr));
        lblWeek2->setText(QCoreApplication::translate("MainWindow", "\346\230\216\345\244\251", nullptr));
        lblWeek4->setText(QCoreApplication::translate("MainWindow", "\345\221\250\344\272\224", nullptr));
        lblDate4->setText(QCoreApplication::translate("MainWindow", "01/05", nullptr));
        lblDate3->setText(QCoreApplication::translate("MainWindow", "01/04", nullptr));
        lblDate5->setText(QCoreApplication::translate("MainWindow", "01/06", nullptr));
        lblDate1->setText(QCoreApplication::translate("MainWindow", "01/02", nullptr));
        lblWeek5->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\205\255", nullptr));
        lblDate2->setText(QCoreApplication::translate("MainWindow", "01/03", nullptr));
        lblWeek3->setText(QCoreApplication::translate("MainWindow", "\345\221\250\345\233\233", nullptr));
        lblWeek0->setText(QCoreApplication::translate("MainWindow", "\346\230\250\345\244\251", nullptr));
        lblTypeIcon5->setText(QString());
        lblType0->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        lblType5->setText(QCoreApplication::translate("MainWindow", "\346\232\264\351\233\250", nullptr));
        lblTypeIcon2->setText(QString());
        lblType2->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon4->setText(QString());
        lblType1->setText(QCoreApplication::translate("MainWindow", "\345\260\217\351\233\250", nullptr));
        lblType4->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\233\250", nullptr));
        lblType3->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        lblTypeIcon3->setText(QString());
        lblTypeIcon1->setText(QString());
        lblTypeIcon0->setText(QString());
        lblQuality0->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        lblQuality1->setText(QCoreApplication::translate("MainWindow", "\350\211\257", nullptr));
        lblQuality2->setText(QCoreApplication::translate("MainWindow", "\350\275\273\345\272\246", nullptr));
        lblQuality3->setText(QCoreApplication::translate("MainWindow", "\344\270\255\345\272\246", nullptr));
        lblQuality4->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\272\246", nullptr));
        lblQuality5->setText(QCoreApplication::translate("MainWindow", "\344\270\245\351\207\215", nullptr));
        lblHighCurve->setText(QString());
        lblLowCurve->setText(QString());
        lblFx0->setText(QCoreApplication::translate("MainWindow", "\344\270\234\351\243\216", nullptr));
        lblFx1->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\214\227\351\243\216", nullptr));
        lblFx2->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx3->setText(QCoreApplication::translate("MainWindow", "\350\245\277\345\214\227\351\243\216", nullptr));
        lblFx4->setText(QCoreApplication::translate("MainWindow", "\344\270\234\345\215\227\351\243\216", nullptr));
        lblFx5->setText(QCoreApplication::translate("MainWindow", "\350\245\277\351\243\216", nullptr));
        lblFl0->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl1->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        lblFl2->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl3->setText(QCoreApplication::translate("MainWindow", "1\347\272\247", nullptr));
        lblFl4->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
        lblFl5->setText(QCoreApplication::translate("MainWindow", "2\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
