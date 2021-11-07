#include <QApplication>
#include "nestedlayouts.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto N= new nestedlayouts;
      N->show();
    return a.exec();
}
