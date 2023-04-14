#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString vaziat(int data);
    QString vaziat2(int data);
    void lru (int data);
    void lru2(int data,int block);
    int number;

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();


    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_radioButton_A_clicked();

    void on_radioButton_d_clicked();

    void on_radioButton_Q_clicked();

private:
    Ui::MainWindow *ui;
    int memory [4][8] ={{2,5,8,9,15,56,87,98},
                        {15,35,44,87,98,66,77,3},
                        {3,5,8,9,56,78,66,98},
                        {32,45,85,99,45,66,5,8}};
    int cach [4]={NULL,NULL,NULL,NULL};
    int tag [4]={NULL,NULL,NULL,NULL};
    QList <int> lr;
    QList <int> lr2;
    int block;
    int index;
    int count=8;
    int  i=0;
    int  i1=0;
    QStringList va;
    const float T_cache=0.65;
    const float T_mem = 0.9;
    int cach2[4][10];
};
#endif // MAINWINDOW_H
