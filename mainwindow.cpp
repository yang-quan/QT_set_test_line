#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QFont>
/*
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
*/
///////////////////////////////////////////
ArrowWidget::ArrowWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(560,260);
}


void ArrowWidget::paintEvent(QPaintEvent *event)
{
    /*
    QPainterPath path;
//    path.moveTo(10,100);
//    path.cubicTo(10, 100, 100, 10, 200, 70);
//    path.lineTo(200, 50);
//    path.lineTo(220, 80);
//    path.lineTo(200, 110);
//    path.lineTo(200, 90);
//    path.cubicTo(200, 100, 100, 50, 50, 100);

    QPainter painter(this);
    painter.fillRect(0, 0, width(), height(), Qt::white);
    QPen pen(QColor(255, 0, 0), 2);
    painter.setPen(pen);
    painter.drawPath(path);

    QLinearGradient linearGrad(QPointF(200, 0), QPointF(1000, 0));
//    linearGrad.setColorAt(0, Qt::black);
//    linearGrad.setColorAt(1, Qt::white);
    QFont font("Times New Roman", 80);
    font.setBold(true);
    QPainterPath textPath;
    textPath.addText(200, 300, font, tr("QQQQQQ"));
    painter.setBrush(linearGrad);
    painter.drawPath(textPath);
*/
        QLinearGradient linearGrad(QPointF(200, 0), QPointF(1000, 0));
        int i = 100;
        QString str("Howard");
        QPainterPath path;
        QPen pen(Qt::black);
        QPainter painter(this);

        pen.setStyle(Qt::SolidLine);
        pen.setWidth(3);//设置字体轮廓线条粗细
        QFont font("Times New Roman", 80);//设置字体样式
        font.setWeight(5);
        font.setBold(true);//设置粗体
        path.addText(i, i, font, str);
        painter.strokePath(path, pen);
        painter.fillPath(path, QBrush(Qt::white));
        painter.drawPath(path);

        //widget->show();
}
