/********************************************************************************
** Form generated from reading UI file 'childdialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHILDDIALOG1_H
#define UI_CHILDDIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ChildDialog1
{
public:
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *ChildDialog1)
    {
        if (ChildDialog1->objectName().isEmpty())
            ChildDialog1->setObjectName(QStringLiteral("ChildDialog1"));
        ChildDialog1->resize(565, 515);
        ChildDialog1->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(ChildDialog1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 80, 121, 23));
        pushButton->setStyleSheet(QStringLiteral("border-image: url(:/QTTest1/Resources/pushbutton.png);"));
        tableView = new QTableView(ChildDialog1);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(150, 190, 256, 192));

        retranslateUi(ChildDialog1);

        QMetaObject::connectSlotsByName(ChildDialog1);
    } // setupUi

    void retranslateUi(QDialog *ChildDialog1)
    {
        ChildDialog1->setWindowTitle(QApplication::translate("ChildDialog1", "ChildDialog1", 0));
        pushButton->setText(QApplication::translate("ChildDialog1", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class ChildDialog1: public Ui_ChildDialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHILDDIALOG1_H
