/********************************************************************************
** Form generated from reading UI file 'qttest1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTEST1_H
#define UI_QTTEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTTest1Class
{
public:
    QWidget *centralWidget;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTTest1Class)
    {
        if (QTTest1Class->objectName().isEmpty())
            QTTest1Class->setObjectName(QStringLiteral("QTTest1Class"));
        QTTest1Class->resize(748, 585);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QTTest1Class->sizePolicy().hasHeightForWidth());
        QTTest1Class->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(QTTest1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(60, 240, 271, 192));
        QTTest1Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTTest1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 748, 23));
        QTTest1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTTest1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTTest1Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTTest1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTTest1Class->setStatusBar(statusBar);

        retranslateUi(QTTest1Class);

        QMetaObject::connectSlotsByName(QTTest1Class);
    } // setupUi

    void retranslateUi(QMainWindow *QTTest1Class)
    {
        QTTest1Class->setWindowTitle(QApplication::translate("QTTest1Class", "QTTest1", 0));
    } // retranslateUi

};

namespace Ui {
    class QTTest1Class: public Ui_QTTest1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTEST1_H
