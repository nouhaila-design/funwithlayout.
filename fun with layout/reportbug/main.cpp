#include <QApplication>
#include "reportbug.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     reportbug *bugreportForm = new reportbug;
     bugreportForm->show();
    return a.exec();
}
