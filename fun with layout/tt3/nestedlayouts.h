#ifndef NESTEDLAYOUTS_H
#define NESTEDLAYOUTS_H
#include <QCheckBox>
#include<QApplication>
#include<QWidget>
#include<QLabel>
#include<QPushButton>
#include<QLineEdit>
#include <QSpinBox>
class nestedlayouts: public QWidget
{
public:
   explicit nestedlayouts(QWidget *parent = nullptr);
protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexion();
 protected:
    QLabel *name;
    QLineEdit* Nick;
    QLineEdit *line;
    QPushButton *search;
    QPushButton *close;
    QCheckBox* matchcase;
    QCheckBox* backword;
};

#endif // NESTEDLAYOUTS_H
