/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *descriptionPluginGroupBox;
    QGridLayout *gridLayout_2;
    QGroupBox *runPluginGroupBox;
    QGridLayout *gridLayout_3;
    QPushButton *runPluginPushButton;
    QLabel *pluginNameLabel;
    QTextBrowser *pluginTextBrowser;
    QListView *listView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        descriptionPluginGroupBox = new QGroupBox(centralWidget);
        descriptionPluginGroupBox->setObjectName(QString::fromUtf8("descriptionPluginGroupBox"));
        gridLayout_2 = new QGridLayout(descriptionPluginGroupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        runPluginGroupBox = new QGroupBox(descriptionPluginGroupBox);
        runPluginGroupBox->setObjectName(QString::fromUtf8("runPluginGroupBox"));
        gridLayout_3 = new QGridLayout(runPluginGroupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        runPluginPushButton = new QPushButton(runPluginGroupBox);
        runPluginPushButton->setObjectName(QString::fromUtf8("runPluginPushButton"));
        runPluginPushButton->setEnabled(false);

        gridLayout_3->addWidget(runPluginPushButton, 0, 0, 1, 1);

        pluginNameLabel = new QLabel(runPluginGroupBox);
        pluginNameLabel->setObjectName(QString::fromUtf8("pluginNameLabel"));

        gridLayout_3->addWidget(pluginNameLabel, 0, 1, 1, 1);


        gridLayout_2->addWidget(runPluginGroupBox, 1, 1, 1, 1);

        pluginTextBrowser = new QTextBrowser(descriptionPluginGroupBox);
        pluginTextBrowser->setObjectName(QString::fromUtf8("pluginTextBrowser"));

        gridLayout_2->addWidget(pluginTextBrowser, 2, 1, 1, 1);


        gridLayout->addWidget(descriptionPluginGroupBox, 1, 1, 1, 1);

        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout->addWidget(listView, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sapristy Software", nullptr));
        descriptionPluginGroupBox->setTitle(QString());
        runPluginGroupBox->setTitle(QString());
        runPluginPushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\320\272", nullptr));
        pluginNameLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
