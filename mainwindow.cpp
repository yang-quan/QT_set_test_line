#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QFont>
#include <QLayout>

ArrowWidget::ArrowWidget(QWidget *parent)
    : QWidget(parent)
{
    resize(700,300);//设置窗口大小
}

void ArrowWidget::paintEvent(QPaintEvent *event)
{

        int i = 100,j = 180; //str位置
        QString str("Howard");
        QPainterPath path;
        QPen pen(Qt::black);//轮廓为黑色的
        QPainter painter(this);

        pen.setStyle(Qt::SolidLine);//轮廓线为实线
        pen.setWidth(3);//设置字体轮廓线条粗细
        QFont font("Times New Roman", 100);//设置字体样式
        
        font.setBold(true);//设置粗体
        path.addText(i, j, font, str);//add path
        painter.strokePath(path, pen);//set SolidLine style
        painter.fillPath(path, QBrush(Qt::white));//字体颜色
        painter.drawPath(path);

}
