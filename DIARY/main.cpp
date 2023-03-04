#include "home.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HOME w;
    w.show();
    return a.exec();
}
