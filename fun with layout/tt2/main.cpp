#include <QApplication>
#include "design.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    design *d=new design();
    d->show();
    return a.exec();
}
