/********************************************************************************
** Form generated from reading UI file 'testinfotable.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINFOTABLE_H
#define UI_TESTINFOTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInfoTable
{
public:

    void setupUi(QWidget *TestInfoTable)
    {
        if (TestInfoTable->objectName().isEmpty())
            TestInfoTable->setObjectName(QStringLiteral("TestInfoTable"));
        TestInfoTable->resize(1238, 16);
        TestInfoTable->setMaximumSize(QSize(16777215, 16));

        retranslateUi(TestInfoTable);

        QMetaObject::connectSlotsByName(TestInfoTable);
    } // setupUi

    void retranslateUi(QWidget *TestInfoTable)
    {
        TestInfoTable->setWindowTitle(QApplication::translate("TestInfoTable", "TestInfoTable", 0));
    } // retranslateUi

};

namespace Ui {
    class TestInfoTable: public Ui_TestInfoTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINFOTABLE_H
