#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>
#include<QVBoxLayout>
#include<QPushButton>
#include<QGridLayout>
#include<QLCDNumber>
class calculator : public QWidget
{
    Q_OBJECT
public:
    explicit calculator(QWidget *parent = nullptr);

protected:
    void createwidgets();
    void placewidgets();
    void Connexionwidgets();

QPushButton *button1;
QPushButton *button2;
QPushButton *button3;
QPushButton *button4;
QPushButton *button5;
QPushButton *button6;
QPushButton *button7;
QPushButton *button9;
QPushButton *button8;
QPushButton *button10;
QPushButton *button11;
QGridLayout *grid;
//QWidget *window;
QLCDNumber *number;
QVBoxLayout *layout;

};

#endif // CALCULATOR_H
