/********************************************************************************
** Form generated from reading UI file 'testinfoitem.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTINFOITEM_H
#define UI_TESTINFOITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestInfoItem
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *TestInfoItem)
    {
        if (TestInfoItem->objectName().isEmpty())
            TestInfoItem->setObjectName(QStringLiteral("TestInfoItem"));
        TestInfoItem->resize(1238, 50);
        verticalLayout = new QVBoxLayout(TestInfoItem);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(34, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(TestInfoItem);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(220, 0));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_2 = new QLabel(TestInfoItem);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(80, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(84, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_3 = new QLabel(TestInfoItem);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(160, 0));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(39, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_4 = new QLabel(TestInfoItem);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(80, 0));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        label_5 = new QLabel(TestInfoItem);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(80, 0));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_5);

        horizontalSpacer_6 = new QSpacerItem(139, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(TestInfoItem);

        QMetaObject::connectSlotsByName(TestInfoItem);
    } // setupUi

    void retranslateUi(QWidget *TestInfoItem)
    {
        TestInfoItem->setWindowTitle(QApplication::translate("TestInfoItem", "TestInfoItem", 0));
        label->setText(QApplication::translate("TestInfoItem", "TextLabel", 0));
        label_2->setText(QApplication::translate("TestInfoItem", "TextLabel", 0));
        label_3->setText(QApplication::translate("TestInfoItem", "TextLabel", 0));
        label_4->setText(QApplication::translate("TestInfoItem", "TextLabel", 0));
        label_5->setText(QApplication::translate("TestInfoItem", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class TestInfoItem: public Ui_TestInfoItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTINFOITEM_H
