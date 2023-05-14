#include "connect_test01.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connect_test01 w;
    w.show();
    return a.exec();
}
