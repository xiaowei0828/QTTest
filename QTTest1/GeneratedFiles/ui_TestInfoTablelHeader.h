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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInfoTableHeader
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *TestInfoTableHeader)
    {
        if (TestInfoTableHeader->objectName().isEmpty())
            TestInfoTableHeader->setObjectName(QStringLiteral("TestInfoTableHeader"));
        TestInfoTableHeader->resize(1238, 48);
        horizontalLayout = new QHBoxLayout(TestInfoTableHeader);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(TestInfoTableHeader);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(TestInfoTableHeader);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(90, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(TestInfoTableHeader);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setScaledContents(false);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(737, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_4 = new QLabel(TestInfoTableHeader);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_4 = new QSpacerItem(33, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


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
