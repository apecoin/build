/********************************************************************************
** Form generated from reading UI file 'faqpage.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAQPAGE_H
#define UI_FAQPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FaqPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTextEdit *faqTextEdit;

    void setupUi(QWidget *FaqPage)
    {
        if (FaqPage->objectName().isEmpty())
            FaqPage->setObjectName(QStringLiteral("FaqPage"));
        FaqPage->resize(729, 500);
        gridLayout = new QGridLayout(FaqPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        faqTextEdit = new QTextEdit(FaqPage);
        faqTextEdit->setObjectName(QStringLiteral("faqTextEdit"));

        verticalLayout->addWidget(faqTextEdit);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(FaqPage);

        QMetaObject::connectSlotsByName(FaqPage);
    } // setupUi

    void retranslateUi(QWidget *FaqPage)
    {
        FaqPage->setWindowTitle(QApplication::translate("FaqPage", "FAQ", 0));
    } // retranslateUi

};

namespace Ui {
    class FaqPage: public Ui_FaqPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAQPAGE_H
