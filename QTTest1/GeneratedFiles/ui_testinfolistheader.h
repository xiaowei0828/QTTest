/********************************************************************************
** Form generated from reading UI file 'Testinfolistheader.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINFOLISTHEADER_H
#define UI_TESTINFOLISTHEADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInfoListHeader
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *TestInfoListHeader)
    {
        if (TestInfoListHeader->objectName().isEmpty())
            TestInfoListHeader->setObjectName(QStringLiteral("TestInfoListHeader"));
        TestInfoListHeader->resize(701, 48);
        label = new QLabel(TestInfoListHeader);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 54, 12));
        label_2 = new QLabel(TestInfoListHeader);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 20, 54, 12));
        label_3 = new QLabel(TestInfoListHeader);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 20, 54, 12));

        retranslateUi(TestInfoListHeader);

        QMetaObject::connectSlotsByName(TestInfoListHeader);
    } // setupUi

    void retranslateUi(QWidget *TestInfoListHeader)
    {
        TestInfoListHeader->setWindowTitle(QApplication::translate("TestInfoListHeader", "TestInfoListHeader", 0));
        label->setText(QApplication::translate("TestInfoListHeader", "TextLabel", 0));
        label_2->setText(QApplication::translate("TestInfoListHeader", "TextLabel", 0));
        label_3->setText(QApplication::translate("TestInfoListHeader", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class TestInfoListHeader: public Ui_TestInfoListHeader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINFOLISTHEADER_H
