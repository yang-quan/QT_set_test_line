#include "mainwindow.h"
#include <QApplication>
#include"qpainter.h"
#include <QPalette>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ArrowWidget w;
    //设置背景色为red
    QPalette palette(w.palette());
    palette.setColor(QPalette::Background, Qt::red);
    w.setPalette(palette);

    w.show();
    return a.exec();
}
