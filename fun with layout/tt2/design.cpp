#include "design.h"
#include <QHBoxLayout>
#include <QVBoxLayout>


design::design(QWidget *parent): QWidget(parent)
{
 createWidgets();
 placeWidgets();
 makeconnexion();

}

void design::createWidgets(){

    label = new QLabel("Name");
    edit = new QLineEdit;
    search = new QPushButton("search");
}
void design::placeWidgets(){
    auto layout = new QHBoxLayout;
    this->setLayout(layout);
    layout->addWidget(label);
    layout->addWidget(edit);
    layout->addWidget(search);

}
void design::makeconnexion(){

   connect(search,&QPushButton::clicked,qApp,&QApplication::exit);


}
