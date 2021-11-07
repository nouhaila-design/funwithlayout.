#ifndef DESIGN_H
#define DESIGN_H


#include<QApplication>
#include<QWidget>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>


class design : public QWidget
{
public:
   explicit design(QWidget *parent = nullptr);
protected:
    void createWidgets();
    void placeWidgets();
    void makeconnexion();
 protected:
    QLabel *label;
    QLineEdit *edit;
    QPushButton *search;

};

#endif // DESIGN_H
