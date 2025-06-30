#include "widget.h"
#include "ui_widget.h"

#include<QStandardPaths>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include<QMouseEvent>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QPainter>
#include<QTimer>



Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // 设置 窗口标志
    this->setWindowFlag(Qt::FramelessWindowHint);

    //  把城市县id用map储存起来，避免每次用file打开读取关闭
    QFile file(":/citycode-2019-08-23.json");
    file.open(QIODevice::ReadOnly);
    QByteArray cityid = file.readAll();
    file.close();
    QJsonDocument jsonDoc = QJsonDocument::fromJson(cityid);
    QJsonArray rootArray=jsonDoc.array();
    for(const QJsonValue & val:rootArray)
    {
        QJsonObject obj=val.toObject();

        QString cityName= obj["city_name"].toString();
        if(obj["city_code"].toString().isEmpty())
        {
            continue;
        }
        city_name_id[cityName]=obj["city_code"].toString();
    }

    qDebug()<<"城市id有："<<city_name_id.size();

    //  给各种天气设置图标
    weaIcon.insert("晴",":/imd/clear_2.png");
    weaIcon.insert("多云", ":/imd/duoyun.png");
    weaIcon.insert("阴", ":/imd/yin.png");
    weaIcon.insert("阵雨",":/imd/zhenyu.png");
    weaIcon.insert("小雨", ":/imd/xiaoyu.png");
    weaIcon.insert("中雨", ":/imd/zhongyu.png");
    weaIcon.insert("大雨", ":/imd/dayu.png");
    weaIcon.insert("暴雨", ":/imd/baoyu.png");
    weaIcon.insert("大暴雨", ":/imd/dabaoyu.png");
    weaIcon.insert("雷阵雨", ":/imd/leizhenyu.png");
    weaIcon.insert("雷阵雨转冰雹",":/imd/leizhenyubanBingbao.png");
    weaIcon.insert("冻雨",":/imd/dongyu.png");
    weaIcon.insert("雪", ":/imd/xue.png");
    weaIcon.insert("小雪",":/imd/xiaoxue.png");
    weaIcon.insert("中雪",":/imd/zhonngxue.png");
    weaIcon.insert("大雪",":/imd/daxue.png");
    weaIcon.insert("雨夹雪",":/imd/yujiaxue.png");
     weaIcon.insert("阵雪", ":/imd/zhenxue.png");
    weaIcon.insert("雾", ":/imd/wu.png");
    weaIcon.insert("雾霾", ":/imd/mai.png");





    // 添加一个退出菜单
    menu=new QMenu(this);
    QAction *action =new QAction(QIcon(":/imd/exec.png"),tr("退出"),this);
    //QAction action(QIcon(":/imd/exec.png"),tr("退出"),this); // 栈上开辟 出了这个函数作用域后回销毁，此时传给menu的会成野指针
    menu->addAction(action);
    connect(menu,&QMenu::triggered,this,[=]()
            {
                this->close();
            });


    //创建一个网络访问管理器对象（QNetworkAccessManager），用于发送 HTTP 请求（如 GET、POST）并管理网络响应。
    manager=new QNetworkAccessManager(this); //通过 this 设置父对象，确保 manager 的生命周期与当前对象绑定（当 this 被销毁时，manager 会自动清理）。

    strcity="http://gfeljm.tianqiapi.com/api?unescape=1&version=v91&appid=38344352&appsecret=C5VkWjol&ext=&cityid=";
    //创建一个 HTTP 请求对象（QNetworkRequest），指定目标地址
    QUrl xiAn("http://gfeljm.tianqiapi.com/api?unescape=1&version=v91&appid=38344352&appsecret=C5VkWjol&ext=&cityid=101110101");
    QUrl cnt2("http://gfeljm.tianqiapi.com/api?unescape=1&version=v91&appid=38344352&appsecret=C5VkWjol&ext=&cityid=101110101");
    QNetworkRequest request(cnt2);

    reply= manager->get(request); //manager->get(request)内部会通过new创建 QNetworkReply 对象，因此它的生命周期 不由栈区自动管理。
    //  reply 指向的是通过 manager->get(request)动态分配的堆区对象，
    // 返回值是一个 QNetworkReply* 指针，表示异步的网络响应。
    // 注意：manager 不会自动删除 reply，需要手动处理或在槽函数中调用 deleteLater()。


    //当 manager 完成一个网络请求时，会发出 finished(QNetworkReply*) 信号。
    //将该信号连接到 Widget 类的 readHttpRply 槽函数，以便处理响应数据。
    connect(manager,&QNetworkAccessManager::finished,this,&Widget::readHttpRply);


    // 安装事件过滤器
    ui->widget_right04->installEventFilter(this);

}

Widget::~Widget()
{
    reply->deleteLater(); // 手动释放 reply指向的堆区内存
    reply=nullptr;
    delete ui;
}



void Widget::mousePressEvent(QMouseEvent *event)
{
    /* event->pos()返回的是相对于当前窗口部件（widget）的本地坐标。 比如，如果点击了按钮，这个坐标是相对于按钮左上角的位置。
    * 而globalPos()返回的是相对于整个屏幕的全局坐标，也就是鼠标在屏幕上的绝对位置。*/
    if(event->button() == Qt::RightButton )
    {
        //qDebug()<<"In";
        menu->exec(QCursor::pos());
    }
    /* 鼠标当前位置：event->globalPos()
        窗口当前位置：this->pos()  窗口新位置：     */
    else if( event->button() == Qt::LeftButton)
    {

            //  qDebug()<<"In Left ";
        //  偏移值= 鼠标当前位置-窗口位置
        mOffset=event->globalPos()-this->pos(); // 获取偏移值
    }
}

/*mouseMoveEvent 是 Qt 中用于处理鼠标移动事件的函数   默认情况下
    只有当鼠标按键被按下时，才会触发 mouseMoveEvent。*/
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    //qDebug()<<"In move";
    // 移动新窗口位置 ：当前鼠标位置-偏移值
    this->move(event->globalPos()-mOffset);
}

// 事件过滤器
bool Widget::eventFilter(QObject *object, QEvent *event)
{
   // qDebug()<<zuidiqiwen.size()<<" "<<zuigaoqiwen.size()<<" 事件过滤";

    if(object == ui->widget_right04 && event->type() == QEvent::Paint)
    {
        drawLineHing();
        drawLinelow();
    }

    return true;
}



void Widget::drawLineHing()
{

    if(zuidiqiwen.size()<6 || zuigaoqiwen.size()<6) return;


    QPainter painter(ui->widget_right04);
    painter.setRenderHint(QPainter::Antialiasing);// 抗锯齿
    painter.setBrush(QColor(255, 184, 16));
    painter.setPen(QPen(QColor(255, 184, 16),2));

    // 偏移值 = 当前气温-平均气温
    // y的偏移值= 水平线 -偏移值


    double w=ui->date_0_KQ->width()/2;
    double h1=ui->widget_right04->height()/4+40;

    QPointF pointF[6];
    for(int i=0;i<zuigaoqiwen.size();i++)
    {
        QString str=QString("date_%1_KQ").arg(i);
        QLabel *label_kq=findChild<QLabel*>(str);
        if(!label_kq)
        {
            qDebug()<<"未找到";
            continue;
        }
        pointF[i].setX(label_kq->x()+w);
        pointF[i].setY(h1-((zuigaoqiwen[i]-(gaoave/6))*3));

        // 画点
        painter.setBrush(Qt::yellow);
        painter.drawEllipse(pointF[i],2,2);

        QString data=QString::number(zuigaoqiwen[i]);
        painter.drawText(pointF[i].rx()-10,pointF[i].ry()-10,data+"℃");



    }

    for(int i=0;i<5;i++)
    {
        painter.drawLine(pointF[i],pointF[i+1]);
    }

}

// 画低温曲线
void Widget::drawLinelow()
{
    if(zuidiqiwen.size()<6 || zuigaoqiwen.size()<6) return;


    QPainter painter(ui->widget_right04);
    painter.setRenderHint(QPainter::Antialiasing);// 抗锯齿
    painter.setBrush(QColor(1, 164, 195));
    painter.setPen(QPen(QColor(1, 164, 195),2));

    // 偏移值 = 当前气温-平均气温
    // y的偏移值= 水平线 -偏移值


    double w=ui->date_0_KQ->width()/2;
    double h1=ui->widget_right04->height()/2+20;

    QPointF pointF[6];
    for(int i=0;i<zuidiqiwen.size();i++)
    {
        QString str=QString("date_%1_KQ").arg(i);
        QLabel *label_kq=findChild<QLabel*>(str);
        if(!label_kq)
        {
            qDebug()<<"未找到";
            continue;
        }
        pointF[i].setX(label_kq->x()+w);
        pointF[i].setY(h1-((zuidiqiwen[i]-(gaoave/6))*3));

        // 画点
        painter.setBrush(Qt::yellow);
        painter.drawEllipse(pointF[i],2,2);

        QString data=QString::number(zuidiqiwen[i]);
        painter.drawText(pointF[i].rx()-10,pointF[i].ry()-10,data+"℃");


    }

    for(int i=0;i<5;i++)
    {
        painter.drawLine(pointF[i],pointF[i+1]);
    }

}




//  获取的天气数据显示到ui上
void Widget::parseWeatherJsonData(QByteArray rawData)
{

    //清空数组并确保数据长度
    zuigaoqiwen.clear();
    zuidiqiwen.clear();
    gaoave = 0; // 添加
    lowave = 0; // 添加

    // 将QBytearray 转换成json数据
    QJsonDocument jsonObj=QJsonDocument::fromJson(rawData);

    // 获取根对象
    if(!jsonObj.isNull() && jsonObj.isObject())
    {
        QJsonObject rootObj=jsonObj.object();

        QJsonObject aqiObj = rootObj["aqi"].toObject();

        //  ui->city->setText(rootObj ["city"].toString());
        ui->tiXing->setText(aqiObj["air_tips"].toString()+aqiObj["yundong"].toString());
        ui->PMData->setText(aqiObj["pm25_desc"].toString());



        if(rootObj.contains("data") && rootObj["data"].isArray())
        {
            QJsonArray objArray=rootObj ["data"].toArray();
            int i=0;

            for(const QJsonValue &val:objArray)
            {

                QJsonObject obj=val.toObject();
                QString KQData=obj["air_level"].toString();   //obj ["tem"].toString();
                //QString currQiWen =obj ["tem"].toString();
                bool ok;
                double tempDouble = obj["tem"].toString().toDouble(&ok);
                if (ok) {
                    int roundedTemp = qRound(tempDouble); // 四舍五入
                    QString currQiWen = QString::number(roundedTemp);
                    ui->curShowWendu->setText(currQiWen + "℃");
                }
                QString FX;
                QString zuiDiQiWen=obj["tem2"].toString();
                zuidiqiwen.append(zuiDiQiWen.toDouble());
                gaoave+=zuiDiQiWen.toDouble();
                QString zuiGaiQiWen=obj["tem1"].toString();
                zuigaoqiwen.append(zuiGaiQiWen.toDouble());
                lowave+=zuiGaiQiWen.toDouble();
                if(obj.contains("win") && obj["win"].isArray())
                {
                    QJsonArray win_array=obj["win"].toArray();
                     FX=win_array[0].toString(); // 风向
                    ui->FXType->setText(FX);
                }

                QString FXdata=obj["win_speed"].toString();
                QString shidu=obj["humidity"].toString();
                QString wea=obj["wea_day"].toString();
                QString week=obj["week"].toString(); // 星期
                QString date=obj["date"].toString(); // 年月日
                QStringList YMD = date.split('-'); // 拆分年月日
                QString month;
                QString day;
                if(3==YMD.size())
                {
                    month=YMD[1];
                    day=YMD[2];
                }

                // ui得在成员函数内部才能使用 这个函数变成类的成员函数 声明为成员函数（.h 文件）：
                // ui->curShowWendu->setText(QString(tempcurrQiwen+"℃"));
                ui->zuiDiGaoQiWen->setText(zuiDiQiWen+"~"+zuiGaiQiWen+"℃");
                ui->FXData->setText(FXdata);
                ui->shidu->setText(shidu);
                ui->KQZLData->setText(KQData);
                ui->wea->setText(wea);
                ui->currDate->setText(date); // 当前时间 年月日



                // 用arg 优化ui的遍历
                QString date_=QString("date%1").arg(i); // 日期
                QString wea_=QString("date_%1_wea").arg(i);
                QString KQ_ = QString("date_%1_KQ").arg(i);
                QString FX_=QString("date_%1_FX").arg(i);


                // 显示6天的日期
                QLabel *label_i= ui->widget_right01->findChild<QLabel*>(date_);
                if(label_i)
                {
                    if(i!=0)
                    {
                        label_i->setText(QString("%1\n"+month+"/"+day).arg(week));
                    }
                    else if(i==0)
                    {
                        label_i->setText("今天\n"+month+"/"+day);
                    }
                }

                 // 显示6天的天气
                        QLabel *label_tianqi_i=ui->widget_right02->findChild<QLabel*>(wea_);
                        if(label_tianqi_i)
                        {

                            label_tianqi_i->setPixmap(QPixmap(weaIcon[wea]));

                            if(i==0)
                            {
                                // QIcon icon(weaIcon[wea]);
                                // QPixmap pixmap = icon.pixmap(ui->curShowTianqi->size()); // 指定尺寸
                                // ui->curShowTianqi->setPixmap(pixmap);
                                // ui->curShowTianqi->setAlignment(Qt::AlignCenter); // 图片居中显示
                                QString strPixmap=QString("border-image: url(%1)").arg(weaIcon[wea]);
                                ui->curShowTianqi->setStyleSheet(strPixmap);

                            }
                        }

                // 显示6天的空气质量
                QLabel *label_KQ_i=ui->widget_right03->findChild<QLabel*>(KQ_);
                if(label_KQ_i)
                {
                    QString AQI___= obj["air"].toString();
                    int AQI=AQI___.toInt();
                    QString AqiColor;
                    QString chengdu;
                    if (AQI >= 0 && AQI <= 50) { //
                        AqiColor = "rgb(4, 200, 0)";
                        chengdu = "优";
                    } else if (AQI <= 100) {
                        AqiColor = "rgb(117, 169, 2)";
                        chengdu = "良";
                    }else if (AQI <= 150) {
                        AqiColor = "rgb(200, 200, 0)";    // 更亮的黄色
                        chengdu = "轻度污染";
                    } else if (AQI <= 200) {
                        AqiColor = "rgb(255, 99, 71)";    // 更鲜明的橙色（Tomato）
                        chengdu = "中度污染";
                    } else if (AQI <= 300) {
                        AqiColor = "rgb(255, 0, 0)";      // 标准红色
                        chengdu = "重度污染";
                    } else {
                        AqiColor = "rgb(139, 0, 0)";      // 更深的暗红色（Dark Red）
                        chengdu = "严重污染";
                    }

                    // 设置 QLabel 背景颜色和文本
                    QString style = QString(R"(
    font: 12pt "Microsoft YaHei UI";
    background-color: %1;
    border-radius: 5px;
    color: white;
)").arg(AqiColor);
                    label_KQ_i->setStyleSheet(style);
                    label_KQ_i->setText(chengdu);

                }


                //  设置风向
                QLabel *label_FX_i=ui->widget_right05->findChild<QLabel*>(FX_);
                label_FX_i->setText(QString(FX+"\n"+FXdata));



                ++i;
                if(i==6) break;

        }

            update();


    }


    QByteArray objData= jsonObj.toJson();
    QFile file("D:/qtStudent/QFile/test02.json");
    file.open(QIODevice::WriteOnly); //WriteOnly模式默认会清空文件内容，然后从头开始写入。
    file.write(objData);
    file.close();
    }
}

// 读取http请求
void Widget::readHttpRply(QNetworkReply *reply)
{
    int ret=reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt(); // 获取200 404 等信息
    if(reply->error() == QNetworkReply::NoError && ret==200)
    {
        // 大多数网址返回的字符编码 是 utf8
        QByteArray data= reply->readAll();
        parseWeatherJsonData(data);
        //qDebug()<<QString::fromUtf8(data);
    }
    else
    {
        qDebug()<<"请求失败："<<reply->errorString();
    }
}


//  所搜对应城市的 cityid
QString Widget::getCityCodeFromName(QString city_Name)
{
    /* QFile file(":/citycode-2019-08-23.json");
    file.open(QIODevice::ReadOnly);

    QByteArray cityid = file.readAll();
    file.close();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(cityid);
    QJsonArray rootArray=jsonDoc.array();

    for(const QJsonValue & val:rootArray)
    {
        QJsonObject obj=val.toObject();

        QString cityName= obj["city_name"].toString();
        if(cityName==city_Name)
        {
            ui->city->setText(cityName);
            return obj["city_code"].toString();

        }
    }
    return "";*/


    // //  优化方案  map
    // if(city_name_id.contains(city_Name)==true)
    // {
    //     ui->city->setText(city_Name);
    //     return city_name_id[city_Name]; // 返回键对应的值
    // }
    // return "";

    // 前缀匹配  模糊搜索
    QStringList ans;
    QString inputPrefix =city_Name;

    // 遍历 QMap 的所有键值对
    for (auto it = city_name_id.constBegin(); it != city_name_id.constEnd(); ++it) {
        const QString &cityName = it.key(); // 城市名
        const QString &cityId = it.value(); // 城市ID

        // 检查城市名是否以 inputPrefix 开头 前缀匹配         （不区分大小写）
        if (cityName.startsWith(inputPrefix, Qt::CaseInsensitive))
        {
            ui->city->setText(cityName);
            ans.append(cityId); // 将匹配的城市ID添加到结果列表
             if(!ans.isEmpty()) return ans[0];
        }
    }

     return "";
}


void Widget::on_pushButton_findCity_clicked()
{
    // 只有顶层窗口或 QApplication 才能通过样式表影响子控件的样式。
    //ui->widget_right03->setStyleSheet("QLabel {background-color: rgb(117, 30, 2);}"); 没用


    QString cityname=ui->lineEdit_City->text();

    QString cityid=getCityCodeFromName(cityname);

    if(!cityid.isEmpty())
    {

        manager->get(QNetworkRequest(QUrl(strcity+cityid)));
    }
    else
    {
        qDebug()<<"查找错误";
    }

}




