#ifndef NIBPWIDGET_H
#define NIBPWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QStyleOption>
#include <QTimer>
#include <QTime>
#include <QLabel>
#include <QLayout>
#include <QDebug>

class NIBPWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NIBPWidget(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;
    void resizeEvent(QResizeEvent *event) override;
    QVBoxLayout *playoutWhole = new QVBoxLayout;
    QVBoxLayout *playoutLeft = new QVBoxLayout;
    QVBoxLayout *playoutRight = new QVBoxLayout;
    QVBoxLayout *playoutmiddle =new QVBoxLayout;
    QHBoxLayout *playoutBody = new QHBoxLayout;
    QHBoxLayout *playoutHead = new QHBoxLayout;

    QWidget *wholehead = new QWidget;
    QWidget *wholebody = new QWidget;
    QWidget *bodymiddle = new QWidget;
    QWidget *bodyright = new QWidget;
    QWidget *bodyLeft = new QWidget;

    QLabel *title = new QLabel;
    QLabel *setting = new QLabel;
    QLabel *righttop = new QLabel;
    QLabel *rightmiddle = new QLabel;
    QLabel *rightbottom = new QLabel;
    QLabel *middlemiddle = new QLabel;
    QLabel *bodyleftLabel = new QLabel;
    QLabel *bodyleftUp = new QLabel;

    QTimer timer;
    QString timeStr;
    QPixmap *pix = new QPixmap(":/icons/settings.png");


public slots:
    void setLCDTime();

private:
    QLabel *pCurrentTimeLabel = new QLabel(this);
    QTime time;

signals:

};

#endif // NIBPWIDGET_H
