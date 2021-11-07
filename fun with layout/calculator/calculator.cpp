#include "calculator.h"

calculator::calculator(QWidget *parent) : QWidget(parent)
{
createwidgets();
placewidgets();
Connexionwidgets();
}
void calculator::createwidgets(){
    button1= new QPushButton("7");
    button2= new QPushButton("8");
    button3= new QPushButton("9");
    button4= new QPushButton("4");
    button5= new QPushButton("5");
    button6= new QPushButton("6");
    button7= new QPushButton("1");
     button8= new QPushButton("2");
      button9= new QPushButton("3");
       button10= new QPushButton("0");
       button11= new QPushButton("Enter");
    grid = new QGridLayout;

    number =new QLCDNumber;
   layout=new QVBoxLayout;
    setLayout(layout);
}
void calculator::placewidgets(){
number->setMinimumHeight(80);
    grid->addWidget(button1,0,0,1,1);
    grid->addWidget(button2,0,1,1,1);
        grid->addWidget(button3,0,2,1,1);
layout->addWidget(number);
        // 1st row
        grid->addWidget(button4,1,0,1,1);
        grid->addWidget(button5,1,1,1,1);
        grid->addWidget(button6,1,2,1,1);

        grid->addWidget(button7,2,0,1,1);
        grid->addWidget(button8,2,1,1,1);
        grid->addWidget(button9,2,2,1,1);
        grid->addWidget(button10,3,0,1,1);
        grid->addWidget(button11,3,1,1,2);

layout->addLayout(grid);

}
void calculator::Connexionwidgets(){}
