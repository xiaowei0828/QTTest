/********************************************************************************
** Form generated from reading UI file 'testinfosplitter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINFOSPLITTER_H
#define UI_TESTINFOSPLITTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInfoSplitter
{
public:

    void setupUi(QWidget *TestInfoSplitter)
    {
        if (TestInfoSplitter->objectName().isEmpty())
            TestInfoSplitter->setObjectName(QStringLiteral("TestInfoSplitter"));
        TestInfoSplitter->resize(400, 300);

        retranslateUi(TestInfoSplitter);

        QMetaObject::connectSlotsByName(TestInfoSplitter);
    } // setupUi

    void retranslateUi(QWidget *TestInfoSplitter)
    {
        TestInfoSplitter->setWindowTitle(QApplication::translate("TestInfoSplitter", "TestInfoSplitter", 0));
    } // retranslateUi

};

namespace Ui {
    class TestInfoSplitter: public Ui_TestInfoSplitter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINFOSPLITTER_H
