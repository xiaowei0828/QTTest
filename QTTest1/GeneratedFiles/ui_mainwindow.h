/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWindowTitle;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btMinimize;
    QPushButton *btClose;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btUploadTemplate;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btUploadPaper;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btUploadComplete;
    QSpacerItem *horizontalSpacer_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QDialog *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1280, 800);
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelWindowTitle = new QLabel(MainWindow);
        labelWindowTitle->setObjectName(QStringLiteral("labelWindowTitle"));

        horizontalLayout_2->addWidget(labelWindowTitle);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        btMinimize = new QPushButton(MainWindow);
        btMinimize->setObjectName(QStringLiteral("btMinimize"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btMinimize->sizePolicy().hasHeightForWidth());
        btMinimize->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(btMinimize);

        btClose = new QPushButton(MainWindow);
        btClose->setObjectName(QStringLiteral("btClose"));
        btClose->setIconSize(QSize(12, 12));

        horizontalLayout_2->addWidget(btClose);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(20, 4, 10, 4);
        horizontalSpacer = new QSpacerItem(415, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btUploadTemplate = new QPushButton(MainWindow);
        btUploadTemplate->setObjectName(QStringLiteral("btUploadTemplate"));

        horizontalLayout->addWidget(btUploadTemplate);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btUploadPaper = new QPushButton(MainWindow);
        btUploadPaper->setObjectName(QStringLiteral("btUploadPaper"));

        horizontalLayout->addWidget(btUploadPaper);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btUploadComplete = new QPushButton(MainWindow);
        btUploadComplete->setObjectName(QStringLiteral("btUploadComplete"));

        horizontalLayout->addWidget(btUploadComplete);

        horizontalSpacer_2 = new QSpacerItem(415, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(MainWindow);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1260, 712));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QDialog *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        labelWindowTitle->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        btMinimize->setText(QString());
        btClose->setText(QString());
        btUploadTemplate->setText(QApplication::translate("MainWindow", "PushButton", 0));
        btUploadPaper->setText(QApplication::translate("MainWindow", "PushButton", 0));
        btUploadComplete->setText(QApplication::translate("MainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
