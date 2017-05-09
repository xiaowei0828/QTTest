/********************************************************************************
** Form generated from reading UI file 'testinfopanel.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINFOPANEL_H
#define UI_TESTINFOPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInfoPanel
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QWidget *tableWidget;

    void setupUi(QWidget *TestInfoPanel)
    {
        if (TestInfoPanel->objectName().isEmpty())
            TestInfoPanel->setObjectName(QStringLiteral("TestInfoPanel"));
        TestInfoPanel->resize(787, 521);
        gridLayout = new QGridLayout(TestInfoPanel);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_2 = new QPushButton(TestInfoPanel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(635, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButton = new QPushButton(TestInfoPanel);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);

        tableWidget = new QWidget(TestInfoPanel);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        gridLayout->addWidget(tableWidget, 1, 0, 1, 3);

        pushButton_2->raise();
        pushButton->raise();
        tableWidget->raise();

        retranslateUi(TestInfoPanel);

        QMetaObject::connectSlotsByName(TestInfoPanel);
    } // setupUi

    void retranslateUi(QWidget *TestInfoPanel)
    {
        TestInfoPanel->setWindowTitle(QApplication::translate("TestInfoPanel", "TestInfoPanel", 0));
        pushButton_2->setText(QApplication::translate("TestInfoPanel", "PushButton", 0));
        pushButton->setText(QApplication::translate("TestInfoPanel", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class TestInfoPanel: public Ui_TestInfoPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINFOPANEL_H
