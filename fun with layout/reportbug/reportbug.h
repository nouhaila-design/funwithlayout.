#ifndef REPORTBUG_H
#define REPORTBUG_H
#include<QComboBox>
#include<QApplication>
#include<QWidget>
#include<QLabel>
#include<QTextEdit>
#include<QLineEdit>
#include<QDialogButtonBox>
#include<QFormLayout>


class reportbug:public QWidget
{ Q_OBJECT
public:
explicit reportbug(QWidget *parent = nullptr);
protected:
    void createWidgets();
    void placeWidgets();

private:
    QLineEdit *nameEdit;
    QLineEdit *companyEdit;
    QLineEdit *phoneEdit;
    QLineEdit *emailEdit;
    QLineEdit *problemTitleEdit;
    QTextEdit *summaryInformationEdit;
    QComboBox *Combo;
    QDialogButtonBox *buttonBox;
    QFormLayout*layout;
};

#endif // REPORTBUG_H

