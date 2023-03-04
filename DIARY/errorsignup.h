#ifndef ERRORSIGNUP_H
#define ERRORSIGNUP_H

#include <QDialog>

namespace Ui {
class Errorsignup;
}

class Errorsignup : public QDialog
{
    Q_OBJECT

public:
    explicit Errorsignup(QWidget *parent = nullptr);
    ~Errorsignup();

private:
    Ui::Errorsignup *ui;
};

#endif // ERRORSIGNUP_H
