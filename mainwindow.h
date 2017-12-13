#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class ArrowWidget;
class ArrowWidget : public QWidget
{
    Q_OBJECT

public:
    ArrowWidget(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);

private:
    QStringList list;
};

#endif // MAINWINDOW_H
