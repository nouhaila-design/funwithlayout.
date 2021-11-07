#include <QApplication>
#include"calculator.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    auto C= new calculator;
    C->show();

    return a.exec();
}
