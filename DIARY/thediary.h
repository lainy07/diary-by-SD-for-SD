#ifndef THEDIARY_H
#define THEDIARY_H

#include <QDialog>

namespace Ui {
class THEDIARY;
}

class THEDIARY : public QDialog
{
    Q_OBJECT

public:
    explicit THEDIARY(QWidget *parent = nullptr);
    ~THEDIARY();

private:
    Ui::THEDIARY *ui;
};

#endif // THEDIARY_H
