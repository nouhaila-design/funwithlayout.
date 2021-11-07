#include "reportbug.h"
#include <QVBoxLayout>


reportbug::reportbug(QWidget *parent): QWidget(parent)
{         nameEdit = new QLineEdit;
          companyEdit = new QLineEdit;
          phoneEdit = new QLineEdit;
          emailEdit = new QLineEdit;
          problemTitleEdit = new QLineEdit;
          summaryInformationEdit = new QTextEdit;
              Combo = new QComboBox;
              Combo->addItem("Always");
              Combo->addItem("Sometimes");
              Combo->addItem("Rarely");

              buttonBox = new QDialogButtonBox;
              buttonBox->addButton(tr("Submit Bug Report"),QDialogButtonBox::AcceptRole);
              buttonBox->addButton(tr("Don't Submit"), QDialogButtonBox::RejectRole);
              buttonBox->addButton(QDialogButtonBox::Reset);


                      QFormLayout *layout = new QFormLayout;
                     layout->addRow("Name:",  nameEdit);
                     layout->addRow("Company:",  companyEdit);
                     layout->addRow("Phone:", phoneEdit);
                     layout->addRow("Email:", emailEdit);
                     layout->addRow("Problem &Title:", problemTitleEdit);
                     layout->addRow("Summary Information:",summaryInformationEdit);
                     layout->addRow("Reproducibility:", Combo);

                  QVBoxLayout *mainLayout = new QVBoxLayout;
                     mainLayout->addLayout(layout);
                     mainLayout->addWidget(buttonBox);
                        setLayout(mainLayout);
                        setWindowTitle(tr("Report Bug"));

}




