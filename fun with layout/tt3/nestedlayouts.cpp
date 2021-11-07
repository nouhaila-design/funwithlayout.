#include "nestedlayouts.h"
#include <QWidget>
#include <QLayout>

#include<QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QLineEdit>

nestedlayouts::nestedlayouts(QWidget * parent): QWidget(parent)
{
         //creer les widgets
           createWidgets();

           //Placer les widgets
           placeWidgets();

           //etablir les connexions
           makeConnexion();
}
void nestedlayouts::createWidgets()
{
    name = new QLabel ("name");
    Nick = new QLineEdit ("nick");
    search = new QPushButton ("search");
    close = new QPushButton ("close");
    matchcase = new QCheckBox ("match case");
    backword = new QCheckBox ("search backword");
    line = new QLineEdit("username...");
}
void nestedlayouts :: makeConnexion(){
    connect((close), &QPushButton :: clicked ,
            qApp ,& QApplication :: exit );
}
void nestedlayouts :: placeWidgets(){

        //main layout
    auto mainLayout = new QHBoxLayout;
    auto rightLayout = new QVBoxLayout;
    auto leftLayout = new QVBoxLayout;
    auto leftUpLayout = new QHBoxLayout;
    setLayout(mainLayout);


      mainLayout-> addLayout(leftLayout);
      mainLayout->addLayout(rightLayout);
      leftLayout-> addLayout(leftUpLayout);


          //composant des layout
      leftUpLayout->addWidget(name);
      leftUpLayout->addWidget(name);
      leftUpLayout->addWidget(line);

        // la partie left
      leftLayout->addWidget(matchcase);
      leftLayout->addWidget(backword);

          //la partie right
      rightLayout->addWidget(search);
      rightLayout->addWidget(close);
      rightLayout->addSpacerItem(new QSpacerItem(10,10, QSizePolicy :: Expanding));
   }
