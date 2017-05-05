/********************************************************************************
** Form generated from reading UI file 'childdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDDIALOG_H
#define UI_CHILDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChildDialog
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *ChildDialog)
    {
        if (ChildDialog->objectName().isEmpty())
            ChildDialog->setObjectName(QStringLiteral("ChildDialog"));
        ChildDialog->resize(400, 300);
        pushButton = new QPushButton(ChildDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 180, 75, 23));

        retranslateUi(ChildDialog);

        QMetaObject::connectSlotsByName(ChildDialog);
    } // setupUi

    void retranslateUi(QWidget *ChildDialog)
    {
        ChildDialog->setWindowTitle(QApplication::translate("ChildDialog", "ChildDialog", 0));
        pushButton->setText(QApplication::translate("ChildDialog", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class ChildDialog: public Ui_ChildDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG_H
