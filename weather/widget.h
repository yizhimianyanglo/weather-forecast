#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMenu>
#include <QNetworkReply>
#include<QMap>


QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void parseWeatherJsonData(QByteArray array);
    QString getCityCodeFromName(QString city_Name);


    double gaoave;// 6天最高气温平均值
    double lowave; // 6天最低
    QList<double> zuigaoqiwen;
    QList<double>zuidiqiwen;


private:
    Ui::Widget *ui;

    void mousePressEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

    QMenu *menu;

    QPoint mOffset;

    //表示网络请求的响应结果，是异步的
    QNetworkReply *reply;

    QNetworkAccessManager *manager;

    QString strcity;




    QMap<QString,QString> city_name_id;
    QMap<QString,QString> weaIcon;



private:
    bool eventFilter(QObject *object,QEvent *event) override; // 事件过滤

    void drawLineHing();
    void drawLinelow();



public slots:
    void readHttpRply(QNetworkReply *reply);
private slots:
    void on_pushButton_findCity_clicked();
};
#endif // WIDGET_H
