#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include <algorithm>
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton_d->click();
    ui->lineEdit_3->setText(QString::number(count));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::vaziat(int data)
{
    for (int r = 0; r < 3; r++)
        {

                if (cach[r] == data)
                {
                    lr.push_back(r);
                    return  "hit";
                }

        }
    return "miss";
}

QString MainWindow::vaziat2(int data)
{
    for (int i=0;i<3;i++) {
        for (int j=0;j<number;j++) {
            if(cach2[i][j]==data)
            {
                lr2.push_back(j);
                return  "hit";
            }
        }
    }
    return "miss";

}

void MainWindow::lru(int data)
{
    QVector<int>s ;

    if(i<=3){
        cach[i]=data;
    }
    else{
        for (int j=0;j<lr.size();j++) {
            if(lr[j]==0){
                s[0]=s[0]+1;
            }
            else if(lr[j]==1){
               s[1]=s[1]+1;
            }
            else if(lr[j]==2){
               s[2]=s[2]+1;
            }
            else if(lr[j]==3){
               s[3]=s[3]+1;
            }
        }
    int min=*std::min_element(s.begin(),s.end());
    cach[min]=data;

   }

}

void MainWindow::lru2(int data, int block)
{
    QVector<int>s ;
    if(i1<number){
        cach2[block][i1]=data;
    }
    else{
        for (int j=0;j<lr.size();j++) {
            if(lr[j]==0){
                s[0]=s[0]+1;
            }
            else if(lr[j]==1){
               s[1]=s[1]+1;
            }
            else if(lr[j]==2){
               s[2]=s[2]+1;
            }
            else if(lr[j]==3){
               s[3]=s[3]+1;
            }
            else if(lr[j]==4){
               s[4]=s[4]+1;
            }

    }
        int min =INT_MIN;
        int min_block;
        for (int i=0;i<s.size();i++) {
            if (s[i]<min)
              min_block=i;
        }
        cach2[block][min_block]=data;
}

}
void MainWindow::on_pushButton_2_clicked()
{
   if(ui->radioButton_d->isChecked()){
    block= ui->lineEdit->text().toInt();
     index = ui->lineEdit_2->text().toInt();

     ui->pushButton->setEnabled(1);
   }
   else if (ui->radioButton_A->isChecked()) {
       block= ui->lineEdit->text().toInt();
        index = ui->lineEdit_2->text().toInt();
        ui->pushButton->setEnabled(1);
   }
   else if (ui->radioButton_Q->isChecked()) {
       block= ui->lineEdit->text().toInt();
        index = ui->lineEdit_2->text().toInt();
        ui->pushButton->setEnabled(1);
    }
}

void MainWindow::on_pushButton_clicked()
{
    if (ui->radioButton_d->isChecked()) {
        ui->label_2->setText(ui->lineEdit_2->text());

        ui->label_4->setText(ui->lineEdit->text());
        ui->label_6->setText(QString::number(memory[block][index]));
        int data =memory[block][index];
        ui->label_9->setText(vaziat(data));
        va.push_back(vaziat(data));
        if (vaziat(data)=="miss"){
            cach[block]=memory[block][index];
            tag[block]=index;
        }
        count=count -1;
        ui->lineEdit_3->setText(QString::number(count));
        ui->pushButton->setDisabled(1);
        if (count==0){
            ui->pushButton->setDisabled(1);
            ui->pushButton_2->setDisabled(1);
            ui->pushButton_3->setEnabled(1);
        }

   }
   else if (ui->radioButton_A->isChecked())
    {
        ui->label_6->setText(QString::number(memory[block][index]));
        int data =memory[block][index];
        ui->label_9->setText(vaziat(data));
        va.push_back(vaziat(data));
        if (vaziat(data)=="miss"){
            lru(data);
        }
        count=count -1;
        ui->lineEdit_3->setText(QString::number(count));
        ui->pushButton->setDisabled(1);
        if (count==0){
            ui->pushButton->setDisabled(1);
            ui->pushButton_2->setDisabled(1);
            ui->pushButton_3->setEnabled(1);
        }
    }
    else if (ui->radioButton_Q->isChecked())
     {
         ui->label_2->setText(ui->lineEdit_2->text());

         ui->label_4->setText(ui->lineEdit->text());
         ui->label_6->setText(QString::number(memory[block][index]));
         int data =memory[block][index];
         va.push_back(vaziat2(data));
         ui->label_9->setText(vaziat2(data));
         if (vaziat2(data)=="miss"){
             lru2(data,block);
             tag[block]=index;
         }
         count=count -1;
         ui->lineEdit_3->setText(QString::number(count));
         ui->pushButton->setDisabled(1);
         if (count==0){
             ui->pushButton->setDisabled(1);
             ui->pushButton_2->setDisabled(1);
             ui->pushButton_3->setEnabled(1);
         }
     }
}



void MainWindow::on_pushButton_3_clicked()
{
    if(ui->radioButton_d->isChecked())
    {
        double total= va.length();
        double hit =0;
        for (int i = 0; i < total; ++i) {
            if (va[i]=="hit")
                hit=hit+1;
        }

        double hit_rate=hit / total;

        double T = (hit_rate * T_cache)+ ((1 - hit_rate) * T_mem);
        ui->label_11->setText(QString::number(T));
        qDebug()<<QString::number(T)<<QString::number(total)<<QString::number(hit_rate)<<QString::number(hit);
        ui->pushButton_4->setEnabled(1);
    }
    else if (ui->radioButton_A->isChecked())
     {
        double total= va.length();
        double hit =0;
        for (int i = 0; i < total; ++i) {
            if (va[i]=="hit")
                hit=hit+1;
        }

        double hit_rate=hit / total;

        double T = (hit_rate * T_cache)+ ((1 - hit_rate) * T_mem);
        ui->label_11->setText(QString::number(T));
        qDebug()<<QString::number(T)<<QString::number(total)<<QString::number(hit_rate)<<QString::number(hit);
        ui->pushButton_4->setEnabled(1);
     }
     else if (ui->radioButton_Q->isChecked())
      {

        double total= va.length();
        double hit =0;
        for (int i = 0; i < total; ++i) {
            if (va[i]=="hit")
                hit=hit+1;
        }

        double hit_rate=hit / total;

        double T = (hit_rate * T_cache)+ ((1 - hit_rate) * T_mem);
        ui->label_11->setText(QString::number(T));
        qDebug()<<QString::number(T)<<QString::number(total)<<QString::number(hit_rate)<<QString::number(hit);
        ui->pushButton_4->setEnabled(1);
      }

}

void MainWindow::on_pushButton_4_clicked()
{
    count= ui->lineEdit_4->text().toInt();
    ui->lineEdit_3->setText(QString::number(count));
     ui->pushButton_4->setDisabled(1);
    ui->pushButton_2->setEnabled(1);
}

void MainWindow::on_radioButton_A_clicked()
{
    for (int var = 0; var < 3; ++var) {
        cach[i]=NULL;
    }
    count=8;
    ui->lineEdit_3->setText(QString::number(count));
    ui->label->setDisabled(1);
    ui->label_2->setDisabled(1);
    ui->label_3->setDisabled(1);
    ui->label_4->setDisabled(1);

}

void MainWindow::on_radioButton_d_clicked()
{
    for (int var = 0; var < 3; ++var) {
        cach[i]=NULL;
    }
    count=8;
    ui->lineEdit_3->setText(QString::number(count));
    ui->label->setEnabled(1);
    ui->label_2->setEnabled(1);
    ui->label_3->setEnabled(1);
    ui->label_4->setEnabled(1);
}
void MainWindow::on_radioButton_Q_clicked()
{
    for (int var = 0; var < 3; ++var) {
        cach[i]=NULL;
    }
    count=8;
    ui->lineEdit_3->setText(QString::number(count));
    ui->label->setEnabled(1);
    ui->label_2->setEnabled(1);
    ui->label_3->setEnabled(1);
    ui->label_4->setEnabled(1);
    Dialog *dia=new Dialog();
    dia->setModal(true);
    dia->exec();
    number=dia->number;

}
