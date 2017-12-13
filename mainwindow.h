#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
/*
namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    //Ui::ArrowWidget *arrowWidget;
};
*/
//
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
