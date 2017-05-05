/********************************************************************************
** Form generated from reading UI file 'TestInfoTablelHeader.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINFOTABLELHEADER_H
#define UI_TESTINFOTABLELHEADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInfoTableHeader
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *TestInfoTableHeader)
    {
        if (TestInfoTableHeader->objectName().isEmpty())
            TestInfoTableHeader->setObjectName(QStringLiteral("TestInfoTableHeader"));
        TestInfoTableHeader->resize(715, 46);
        label = new QLabel(TestInfoTableHeader);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 54, 12));
        label_2 = new QLabel(TestInfoTableHeader);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 20, 54, 12));
        label_3 = new QLabel(TestInfoTableHeader);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 20, 54, 12));
        label_4 = new QLabel(TestInfoTableHeader);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(630, 20, 54, 12));

        retranslateUi(TestInfoTableHeader);

        QMetaObject::connectSlotsByName(TestInfoTableHeader);
    } // setupUi

    void retranslateUi(QWidget *TestInfoTableHeader)
    {
        TestInfoTableHeader->setWindowTitle(QApplication::translate("TestInfoTableHeader", "TestInfoTableHeader", 0));
        label->setText(QApplication::translate("TestInfoTableHeader", "TextLabel", 0));
        label_2->setText(QApplication::translate("TestInfoTableHeader", "TextLabel", 0));
        label_3->setText(QApplication::translate("TestInfoTableHeader", "TextLabel", 0));
        label_4->setText(QApplication::translate("TestInfoTableHeader", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class TestInfoTableHeader: public Ui_TestInfoTableHeader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINFOTABLELHEADER_H
