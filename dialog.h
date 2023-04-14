#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    int number=0;
private slots:
    void on_pushButton_ok_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
