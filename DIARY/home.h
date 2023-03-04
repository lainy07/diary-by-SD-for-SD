#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HOME; }
QT_END_NAMESPACE

class HOME : public QMainWindow
{
    Q_OBJECT

public:
    HOME(QWidget *parent = nullptr);
    ~HOME();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::HOME *ui;
};
#endif // HOME_H
