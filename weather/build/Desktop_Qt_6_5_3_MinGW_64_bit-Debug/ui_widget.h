/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget_left;
    QWidget *widget_left01;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_City;
    QPushButton *pushButton_findCity;
    QWidget *widget_left02;
    QLabel *curShowTianqi;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QLabel *curShowWendu;
    QHBoxLayout *horizontalLayout_4;
    QLabel *wea;
    QLabel *zuiDiGaoQiWen;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_5;
    QLabel *tiXing;
    QWidget *widget_left03;
    QWidget *widget_6;
    QGridLayout *gridLayout_9;
    QWidget *widget_7;
    QGridLayout *gridLayout_5;
    QLabel *label_19;
    QLabel *FXType;
    QLabel *FXData;
    QWidget *widget_8;
    QGridLayout *gridLayout_6;
    QLabel *PM;
    QLabel *PMData;
    QLabel *label_24;
    QWidget *widget_9;
    QGridLayout *gridLayout_7;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *shidu;
    QWidget *widget_10;
    QGridLayout *gridLayout_8;
    QLabel *label_28;
    QLabel *KQZLData;
    QLabel *label_30;
    QLabel *city;
    QWidget *widget_right;
    QLabel *currDate;
    QWidget *widget_right01;
    QHBoxLayout *horizontalLayout_2;
    QLabel *date0;
    QLabel *date1;
    QLabel *date2;
    QLabel *date3;
    QLabel *date4;
    QLabel *date5;
    QWidget *widget_right02;
    QHBoxLayout *horizontalLayout_3;
    QLabel *date_0_wea;
    QLabel *date_1_wea;
    QLabel *date_2_wea;
    QLabel *date_3_wea;
    QLabel *date_4_wea;
    QLabel *date_5_wea;
    QWidget *widget_right03;
    QHBoxLayout *horizontalLayout_5;
    QLabel *date_0_KQ;
    QLabel *date_1_KQ;
    QLabel *date_2_KQ;
    QLabel *date_3_KQ;
    QLabel *date_4_KQ;
    QLabel *date_5_KQ;
    QWidget *widget_right04;
    QWidget *widget_right05;
    QHBoxLayout *horizontalLayout_6;
    QLabel *date_0_FX;
    QLabel *date_1_FX;
    QLabel *date_2_FX;
    QLabel *date_3_FX;
    QLabel *date_4_FX;
    QLabel *date_5_FX;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(900, 550);
        Widget->setMinimumSize(QSize(900, 550));
        Widget->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(49, 119, 174);"));
        widget_left = new QWidget(Widget);
        widget_left->setObjectName("widget_left");
        widget_left->setGeometry(QRect(0, 0, 361, 541));
        widget_left01 = new QWidget(widget_left);
        widget_left01->setObjectName("widget_left01");
        widget_left01->setGeometry(QRect(10, 10, 241, 41));
        horizontalLayout = new QHBoxLayout(widget_left01);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_City = new QLineEdit(widget_left01);
        lineEdit_City->setObjectName("lineEdit_City");
        lineEdit_City->setMinimumSize(QSize(0, 25));
        lineEdit_City->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(255, 255, 255);\n"
"font: 9pt \"\345\256\213\344\275\223\";\n"
"border-radius: 5px;"));

        horizontalLayout->addWidget(lineEdit_City);

        pushButton_findCity = new QPushButton(widget_left01);
        pushButton_findCity->setObjectName("pushButton_findCity");
        pushButton_findCity->setStyleSheet(QString::fromUtf8("border-image: url(:/imd/find.png);"));

        horizontalLayout->addWidget(pushButton_findCity);

        widget_left02 = new QWidget(widget_left);
        widget_left02->setObjectName("widget_left02");
        widget_left02->setGeometry(QRect(0, 80, 361, 201));
        curShowTianqi = new QLabel(widget_left02);
        curShowTianqi->setObjectName("curShowTianqi");
        curShowTianqi->setGeometry(QRect(6, 6, 161, 171));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(curShowTianqi->sizePolicy().hasHeightForWidth());
        curShowTianqi->setSizePolicy(sizePolicy);
        curShowTianqi->setStyleSheet(QString::fromUtf8("border-image: url(:/imd/clear_2.png);"));
        curShowTianqi->setScaledContents(true);
        layoutWidget = new QWidget(widget_left02);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 30, 131, 131));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        curShowWendu = new QLabel(layoutWidget);
        curShowWendu->setObjectName("curShowWendu");
        curShowWendu->setStyleSheet(QString::fromUtf8("font: 36pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);"));
        curShowWendu->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout_6->addWidget(curShowWendu);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        wea = new QLabel(layoutWidget);
        wea->setObjectName("wea");
        wea->setMinimumSize(QSize(60, 0));
        wea->setMaximumSize(QSize(60, 16777215));
        wea->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";"));
        wea->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(wea);

        zuiDiGaoQiWen = new QLabel(layoutWidget);
        zuiDiGaoQiWen->setObjectName("zuiDiGaoQiWen");
        zuiDiGaoQiWen->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 12pt \"Microsoft YaHei UI\";"));
        zuiDiGaoQiWen->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(zuiDiGaoQiWen);


        verticalLayout_6->addLayout(horizontalLayout_4);

        layoutWidget1 = new QWidget(widget_left);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(12, 312, 341, 211));
        verticalLayout_5 = new QVBoxLayout(layoutWidget1);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        tiXing = new QLabel(layoutWidget1);
        tiXing->setObjectName("tiXing");
        tiXing->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(tiXing);

        widget_left03 = new QWidget(layoutWidget1);
        widget_left03->setObjectName("widget_left03");
        widget_left03->setStyleSheet(QString::fromUtf8("background-color: rgb(157, 142, 255);\n"
"border-radius: 20px;\n"
"color: rgb(255, 255, 255);"));
        widget_6 = new QWidget(widget_left03);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(40, 10, 251, 161));
        gridLayout_9 = new QGridLayout(widget_6);
        gridLayout_9->setObjectName("gridLayout_9");
        widget_7 = new QWidget(widget_6);
        widget_7->setObjectName("widget_7");
        gridLayout_5 = new QGridLayout(widget_7);
        gridLayout_5->setObjectName("gridLayout_5");
        label_19 = new QLabel(widget_7);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(40, 40));
        label_19->setMaximumSize(QSize(40, 40));
        label_19->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/imd/feng.png);"));

        gridLayout_5->addWidget(label_19, 0, 0, 2, 1);

        FXType = new QLabel(widget_7);
        FXType->setObjectName("FXType");
        FXType->setMinimumSize(QSize(60, 0));
        FXType->setMaximumSize(QSize(60, 16777215));
        FXType->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(FXType, 0, 1, 1, 1);

        FXData = new QLabel(widget_7);
        FXData->setObjectName("FXData");
        FXData->setMinimumSize(QSize(30, 0));
        FXData->setMaximumSize(QSize(50, 16777215));
        FXData->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(FXData, 1, 1, 1, 1);


        gridLayout_9->addWidget(widget_7, 0, 0, 1, 1);

        widget_8 = new QWidget(widget_6);
        widget_8->setObjectName("widget_8");
        gridLayout_6 = new QGridLayout(widget_8);
        gridLayout_6->setObjectName("gridLayout_6");
        PM = new QLabel(widget_8);
        PM->setObjectName("PM");
        PM->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(PM, 0, 1, 1, 1);

        PMData = new QLabel(widget_8);
        PMData->setObjectName("PMData");
        PMData->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(PMData, 1, 1, 1, 1);

        label_24 = new QLabel(widget_8);
        label_24->setObjectName("label_24");
        label_24->setMinimumSize(QSize(40, 40));
        label_24->setMaximumSize(QSize(40, 40));
        label_24->setStyleSheet(QString::fromUtf8("image: url(:/imd/wuMai.png);"));

        gridLayout_6->addWidget(label_24, 0, 0, 2, 1);


        gridLayout_9->addWidget(widget_8, 0, 1, 1, 1);

        widget_9 = new QWidget(widget_6);
        widget_9->setObjectName("widget_9");
        gridLayout_7 = new QGridLayout(widget_9);
        gridLayout_7->setObjectName("gridLayout_7");
        label_25 = new QLabel(widget_9);
        label_25->setObjectName("label_25");
        label_25->setMinimumSize(QSize(40, 40));
        label_25->setMaximumSize(QSize(40, 40));
        label_25->setStyleSheet(QString::fromUtf8("image: url(:/imd/ShiDu.png);"));

        gridLayout_7->addWidget(label_25, 0, 0, 2, 1);

        label_26 = new QLabel(widget_9);
        label_26->setObjectName("label_26");
        label_26->setMinimumSize(QSize(40, 0));
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_26, 0, 1, 1, 1);

        shidu = new QLabel(widget_9);
        shidu->setObjectName("shidu");
        shidu->setMinimumSize(QSize(0, 0));
        shidu->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(shidu, 1, 1, 1, 1);


        gridLayout_9->addWidget(widget_9, 1, 0, 1, 1);

        widget_10 = new QWidget(widget_6);
        widget_10->setObjectName("widget_10");
        gridLayout_8 = new QGridLayout(widget_10);
        gridLayout_8->setObjectName("gridLayout_8");
        label_28 = new QLabel(widget_10);
        label_28->setObjectName("label_28");
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_28, 0, 1, 1, 1);

        KQZLData = new QLabel(widget_10);
        KQZLData->setObjectName("KQZLData");
        KQZLData->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(KQZLData, 1, 1, 1, 1);

        label_30 = new QLabel(widget_10);
        label_30->setObjectName("label_30");
        label_30->setMinimumSize(QSize(40, 40));
        label_30->setMaximumSize(QSize(40, 40));
        label_30->setStyleSheet(QString::fromUtf8("border-image: url(:/imd/AirQuality.png);"));

        gridLayout_8->addWidget(label_30, 0, 0, 2, 1);


        gridLayout_9->addWidget(widget_10, 1, 1, 1, 1);


        verticalLayout_5->addWidget(widget_left03);

        city = new QLabel(widget_left);
        city->setObjectName("city");
        city->setGeometry(QRect(270, 70, 71, 20));
        city->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";"));
        widget_right = new QWidget(Widget);
        widget_right->setObjectName("widget_right");
        widget_right->setGeometry(QRect(370, 0, 521, 531));
        currDate = new QLabel(widget_right);
        currDate->setObjectName("currDate");
        currDate->setGeometry(QRect(300, 10, 221, 51));
        currDate->setStyleSheet(QString::fromUtf8("\n"
"font: 26pt \"Microsoft YaHei UI\";"));
        widget_right01 = new QWidget(widget_right);
        widget_right01->setObjectName("widget_right01");
        widget_right01->setGeometry(QRect(30, 60, 491, 61));
        horizontalLayout_2 = new QHBoxLayout(widget_right01);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        date0 = new QLabel(widget_right01);
        date0->setObjectName("date0");
        date0->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 164, 195);\n"
"border-radius: 5px;"));
        date0->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(date0);

        date1 = new QLabel(widget_right01);
        date1->setObjectName("date1");
        date1->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 164, 195);\n"
"border-radius: 5px;"));
        date1->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(date1);

        date2 = new QLabel(widget_right01);
        date2->setObjectName("date2");
        date2->setStyleSheet(QString::fromUtf8("border-radius: 5px;background-color: rgb(1, 164, 195);"));
        date2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(date2);

        date3 = new QLabel(widget_right01);
        date3->setObjectName("date3");
        date3->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 164, 195);\n"
"border-radius: 5px;"));
        date3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(date3);

        date4 = new QLabel(widget_right01);
        date4->setObjectName("date4");
        date4->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 164, 195);\n"
"border-radius: 5px;"));
        date4->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(date4);

        date5 = new QLabel(widget_right01);
        date5->setObjectName("date5");
        date5->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 164, 195);\n"
"border-radius: 5px;"));
        date5->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(date5);

        widget_right02 = new QWidget(widget_right);
        widget_right02->setObjectName("widget_right02");
        widget_right02->setGeometry(QRect(30, 120, 491, 61));
        widget_right02->setStyleSheet(QString::fromUtf8("\n"
"Label{\n"
"background-color: rgb(58, 102, 138);\n"
"border-radius: 5px;\n"
" }"));
        horizontalLayout_3 = new QHBoxLayout(widget_right02);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        date_0_wea = new QLabel(widget_right02);
        date_0_wea->setObjectName("date_0_wea");
        date_0_wea->setMinimumSize(QSize(77, 49));
        date_0_wea->setMaximumSize(QSize(77, 49));
        date_0_wea->setStyleSheet(QString::fromUtf8("image: url(:/imd/cloudy.png);\n"
"background-color: rgb(58, 102, 138);\n"
"border-radius: 5px;"));
        date_0_wea->setScaledContents(true);

        horizontalLayout_3->addWidget(date_0_wea);

        date_1_wea = new QLabel(widget_right02);
        date_1_wea->setObjectName("date_1_wea");
        date_1_wea->setMinimumSize(QSize(77, 49));
        date_1_wea->setMaximumSize(QSize(77, 49));
        date_1_wea->setStyleSheet(QString::fromUtf8("image: url(:/imd/cloudy.png);\n"
"background-color: rgb(58, 102, 138);\n"
"border-radius: 5px;"));
        date_1_wea->setScaledContents(true);

        horizontalLayout_3->addWidget(date_1_wea);

        date_2_wea = new QLabel(widget_right02);
        date_2_wea->setObjectName("date_2_wea");
        date_2_wea->setMinimumSize(QSize(77, 49));
        date_2_wea->setMaximumSize(QSize(77, 49));
        date_2_wea->setStyleSheet(QString::fromUtf8("image: url(:/imd/cloudy.png);\n"
"background-color: rgb(58, 102, 138);\n"
"border-radius: 5px;"));
        date_2_wea->setScaledContents(true);

        horizontalLayout_3->addWidget(date_2_wea);

        date_3_wea = new QLabel(widget_right02);
        date_3_wea->setObjectName("date_3_wea");
        date_3_wea->setMinimumSize(QSize(77, 49));
        date_3_wea->setMaximumSize(QSize(77, 49));
        date_3_wea->setStyleSheet(QString::fromUtf8("image: url(:/imd/cloudy.png);\n"
"background-color: rgb(58, 102, 138);\n"
"border-radius: 5px;"));
        date_3_wea->setScaledContents(true);

        horizontalLayout_3->addWidget(date_3_wea);

        date_4_wea = new QLabel(widget_right02);
        date_4_wea->setObjectName("date_4_wea");
        date_4_wea->setMinimumSize(QSize(77, 49));
        date_4_wea->setMaximumSize(QSize(77, 49));
        date_4_wea->setStyleSheet(QString::fromUtf8("image: url(:/imd/cloudy.png);\n"
"background-color: rgb(58, 102, 138);\n"
"border-radius: 5px;"));
        date_4_wea->setScaledContents(true);

        horizontalLayout_3->addWidget(date_4_wea);

        date_5_wea = new QLabel(widget_right02);
        date_5_wea->setObjectName("date_5_wea");
        date_5_wea->setMinimumSize(QSize(77, 49));
        date_5_wea->setMaximumSize(QSize(77, 49));
        date_5_wea->setStyleSheet(QString::fromUtf8("image: url(:/imd/cloudy.png);\n"
"background-color: rgb(58, 102, 138);\n"
"border-radius: 5px;"));
        date_5_wea->setScaledContents(true);

        horizontalLayout_3->addWidget(date_5_wea);

        widget_right03 = new QWidget(widget_right);
        widget_right03->setObjectName("widget_right03");
        widget_right03->setGeometry(QRect(30, 190, 491, 61));
        widget_right03->setStyleSheet(QString::fromUtf8("Label{\n"
"border-radius:5px;\n"
"font :20\n"
"}\n"
"\n"
""));
        horizontalLayout_5 = new QHBoxLayout(widget_right03);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        date_0_KQ = new QLabel(widget_right03);
        date_0_KQ->setObjectName("date_0_KQ");
        date_0_KQ->setMinimumSize(QSize(77, 49));
        date_0_KQ->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(117, 169, 2);\n"
"border-radius:5px;"));
        date_0_KQ->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(date_0_KQ);

        date_1_KQ = new QLabel(widget_right03);
        date_1_KQ->setObjectName("date_1_KQ");
        date_1_KQ->setMinimumSize(QSize(77, 49));
        date_1_KQ->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(117, 169, 2);\n"
"border-radius:5px;"));
        date_1_KQ->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(date_1_KQ);

        date_2_KQ = new QLabel(widget_right03);
        date_2_KQ->setObjectName("date_2_KQ");
        date_2_KQ->setMinimumSize(QSize(77, 49));
        date_2_KQ->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(117, 169, 2);\n"
"border-radius:5px;"));
        date_2_KQ->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(date_2_KQ);

        date_3_KQ = new QLabel(widget_right03);
        date_3_KQ->setObjectName("date_3_KQ");
        date_3_KQ->setMinimumSize(QSize(77, 49));
        date_3_KQ->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(117, 169, 2);\n"
"border-radius:5px;\n"
"background-color: rgb(255, 184, 16);"));
        date_3_KQ->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(date_3_KQ);

        date_4_KQ = new QLabel(widget_right03);
        date_4_KQ->setObjectName("date_4_KQ");
        date_4_KQ->setMinimumSize(QSize(77, 49));
        date_4_KQ->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(117, 169, 2);\n"
"border-radius:5px;"));
        date_4_KQ->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(date_4_KQ);

        date_5_KQ = new QLabel(widget_right03);
        date_5_KQ->setObjectName("date_5_KQ");
        date_5_KQ->setMinimumSize(QSize(77, 49));
        date_5_KQ->setStyleSheet(QString::fromUtf8("font: 12pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(255, 200, 0);\n"
"border-radius:5px;"));
        date_5_KQ->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(date_5_KQ);

        widget_right04 = new QWidget(widget_right);
        widget_right04->setObjectName("widget_right04");
        widget_right04->setGeometry(QRect(40, 260, 481, 181));
        widget_right04->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 102, 138);\n"
"border-radius:8px;"));
        widget_right05 = new QWidget(widget_right);
        widget_right05->setObjectName("widget_right05");
        widget_right05->setGeometry(QRect(20, 450, 511, 61));
        horizontalLayout_6 = new QHBoxLayout(widget_right05);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        date_0_FX = new QLabel(widget_right05);
        date_0_FX->setObjectName("date_0_FX");
        date_0_FX->setMinimumSize(QSize(80, 49));
        date_0_FX->setMaximumSize(QSize(80, 49));
        date_0_FX->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 102, 138);\n"
"border-radius:5px;"));
        date_0_FX->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(date_0_FX);

        date_1_FX = new QLabel(widget_right05);
        date_1_FX->setObjectName("date_1_FX");
        date_1_FX->setMinimumSize(QSize(80, 49));
        date_1_FX->setMaximumSize(QSize(80, 49));
        date_1_FX->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 102, 138);\n"
"border-radius:5px;"));
        date_1_FX->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(date_1_FX);

        date_2_FX = new QLabel(widget_right05);
        date_2_FX->setObjectName("date_2_FX");
        date_2_FX->setMinimumSize(QSize(80, 49));
        date_2_FX->setMaximumSize(QSize(80, 49));
        date_2_FX->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 102, 138);\n"
"border-radius:5px;"));
        date_2_FX->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(date_2_FX);

        date_3_FX = new QLabel(widget_right05);
        date_3_FX->setObjectName("date_3_FX");
        date_3_FX->setMinimumSize(QSize(80, 49));
        date_3_FX->setMaximumSize(QSize(80, 49));
        date_3_FX->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 102, 138);\n"
"border-radius:5px;"));
        date_3_FX->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(date_3_FX);

        date_4_FX = new QLabel(widget_right05);
        date_4_FX->setObjectName("date_4_FX");
        date_4_FX->setMinimumSize(QSize(80, 49));
        date_4_FX->setMaximumSize(QSize(80, 49));
        date_4_FX->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 102, 138);\n"
"border-radius:5px;"));
        date_4_FX->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(date_4_FX);

        date_5_FX = new QLabel(widget_right05);
        date_5_FX->setObjectName("date_5_FX");
        date_5_FX->setMinimumSize(QSize(80, 49));
        date_5_FX->setMaximumSize(QSize(80, 49));
        date_5_FX->setStyleSheet(QString::fromUtf8("background-color: rgb(58, 102, 138);\n"
"border-radius:5px;"));
        date_5_FX->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(date_5_FX);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
#if QT_CONFIG(tooltip)
        widget_left01->setToolTip(QCoreApplication::translate("Widget", "\350\257\267\350\276\223\345\205\245\345\237\216\345\270\202", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit_City->setText(QCoreApplication::translate("Widget", "\345\237\216\345\270\202", nullptr));
        pushButton_findCity->setText(QString());
        curShowTianqi->setText(QString());
        curShowWendu->setText(QCoreApplication::translate("Widget", "7", nullptr));
        wea->setText(QCoreApplication::translate("Widget", "\346\231\264", nullptr));
        zuiDiGaoQiWen->setText(QCoreApplication::translate("Widget", "7~17", nullptr));
        tiXing->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        label_19->setText(QString());
        FXType->setText(QCoreApplication::translate("Widget", "\350\245\277\345\214\227\351\243\216", nullptr));
        FXData->setText(QCoreApplication::translate("Widget", "3\347\272\247 ", nullptr));
        PM->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        PMData->setText(QCoreApplication::translate("Widget", "1", nullptr));
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        shidu->setText(QCoreApplication::translate("Widget", "15%", nullptr));
        label_28->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        KQZLData->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label_30->setText(QString());
        city->setText(QCoreApplication::translate("Widget", "\350\245\277\345\256\211\345\270\202", nullptr));
        currDate->setText(QCoreApplication::translate("Widget", "2025-06-25", nullptr));
        date0->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251\n"
"06/24", nullptr));
        date1->setText(QCoreApplication::translate("Widget", "\346\230\237\346\234\237\344\270\211\n"
"06/25", nullptr));
        date2->setText(QCoreApplication::translate("Widget", "\346\230\237\346\234\237\345\233\233\n"
"06/26", nullptr));
        date3->setText(QCoreApplication::translate("Widget", "\346\230\237\346\234\237\344\272\224\n"
"0627", nullptr));
        date4->setText(QCoreApplication::translate("Widget", "\346\230\237\346\234\237\345\205\255\n"
"0628", nullptr));
        date5->setText(QCoreApplication::translate("Widget", "\346\230\237\346\234\237\346\227\245\n"
"0629", nullptr));
        date_0_wea->setText(QString());
        date_1_wea->setText(QString());
        date_2_wea->setText(QString());
        date_3_wea->setText(QString());
        date_4_wea->setText(QString());
        date_5_wea->setText(QString());
        date_0_KQ->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        date_1_KQ->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        date_2_KQ->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        date_3_KQ->setText(QCoreApplication::translate("Widget", "\350\211\257", nullptr));
        date_4_KQ->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        date_5_KQ->setText(QCoreApplication::translate("Widget", "\350\275\273\345\272\246\346\261\241\346\237\223", nullptr));
        date_0_FX->setText(QCoreApplication::translate("Widget", "\344\270\234\345\214\227\351\243\216\n"
"3\347\272\247", nullptr));
        date_1_FX->setText(QCoreApplication::translate("Widget", "\344\270\234\345\214\227\351\243\216\n"
"3\347\272\247", nullptr));
        date_2_FX->setText(QCoreApplication::translate("Widget", "\344\270\234\345\214\227\351\243\216\n"
"3\347\272\247", nullptr));
        date_3_FX->setText(QCoreApplication::translate("Widget", "\344\270\234\345\214\227\351\243\216\n"
"3\347\272\247", nullptr));
        date_4_FX->setText(QCoreApplication::translate("Widget", "\344\270\234\345\214\227\351\243\216\n"
"3\347\272\247", nullptr));
        date_5_FX->setText(QCoreApplication::translate("Widget", "\344\270\234\345\214\227\351\243\216\n"
"3\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
