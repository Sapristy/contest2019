/********************************************************************************
** Form generated from reading UI file 'taskmanagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGERWIDGET_H
#define UI_TASKMANAGERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManagerWidget
{
public:
    QGridLayout *gridLayout;
    QPushButton *createTaskPushButton;
    QTabWidget *tabWidget;
    QWidget *Creator;
    QGridLayout *gridLayout_2;
    QGroupBox *finishDateTimeGroupBox;
    QGridLayout *gridLayout_6;
    QDateTimeEdit *finishDateTimeEdit;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *chooseDateTimePushButton;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *taskInformationGroupBox;
    QGridLayout *gridLayout_5;
    QGroupBox *taskNameGroupBox;
    QGridLayout *gridLayout_4;
    QLineEdit *taskNameEdit;
    QGroupBox *descriptionGroupBox;
    QGridLayout *gridLayout_3;
    QTextEdit *descriptionEdit;
    QGroupBox *periodicityGroupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *onceperiodicityRadioButton;
    QRadioButton *dailyPeriodicityRadioButton;
    QRadioButton *weeklyPeriodicityRadioButton;
    QRadioButton *nonthlyPeriodicityRadioButton;
    QRadioButton *annualyPeriodicityRadioButton;
    QGroupBox *groupNameGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *groupNameLineEdit;
    QGroupBox *startDateTimeGroupBox;
    QGridLayout *gridLayout_7;
    QDateTimeEdit *startDateTimeEdit;
    QPushButton *chooseStartDateTimePushButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QWidget *Editor;
    QWidget *Viewer;
    QGridLayout *gridLayout_8;
    QTableWidget *viewTableWidget;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *TaskManagerWidget)
    {
        if (TaskManagerWidget->objectName().isEmpty())
            TaskManagerWidget->setObjectName(QString::fromUtf8("TaskManagerWidget"));
        TaskManagerWidget->resize(582, 526);
        gridLayout = new QGridLayout(TaskManagerWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        createTaskPushButton = new QPushButton(TaskManagerWidget);
        createTaskPushButton->setObjectName(QString::fromUtf8("createTaskPushButton"));

        gridLayout->addWidget(createTaskPushButton, 2, 1, 1, 1);

        tabWidget = new QTabWidget(TaskManagerWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        Creator = new QWidget();
        Creator->setObjectName(QString::fromUtf8("Creator"));
        gridLayout_2 = new QGridLayout(Creator);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        finishDateTimeGroupBox = new QGroupBox(Creator);
        finishDateTimeGroupBox->setObjectName(QString::fromUtf8("finishDateTimeGroupBox"));
        gridLayout_6 = new QGridLayout(finishDateTimeGroupBox);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        finishDateTimeEdit = new QDateTimeEdit(finishDateTimeGroupBox);
        finishDateTimeEdit->setObjectName(QString::fromUtf8("finishDateTimeEdit"));

        gridLayout_6->addWidget(finishDateTimeEdit, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        chooseDateTimePushButton = new QPushButton(finishDateTimeGroupBox);
        chooseDateTimePushButton->setObjectName(QString::fromUtf8("chooseDateTimePushButton"));

        gridLayout_6->addWidget(chooseDateTimePushButton, 0, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 0, 0, 1, 1);


        gridLayout_2->addWidget(finishDateTimeGroupBox, 1, 2, 1, 1);

        taskInformationGroupBox = new QGroupBox(Creator);
        taskInformationGroupBox->setObjectName(QString::fromUtf8("taskInformationGroupBox"));
        gridLayout_5 = new QGridLayout(taskInformationGroupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        taskNameGroupBox = new QGroupBox(taskInformationGroupBox);
        taskNameGroupBox->setObjectName(QString::fromUtf8("taskNameGroupBox"));
        gridLayout_4 = new QGridLayout(taskNameGroupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        taskNameEdit = new QLineEdit(taskNameGroupBox);
        taskNameEdit->setObjectName(QString::fromUtf8("taskNameEdit"));

        gridLayout_4->addWidget(taskNameEdit, 0, 0, 1, 1);


        gridLayout_5->addWidget(taskNameGroupBox, 0, 0, 1, 1);

        descriptionGroupBox = new QGroupBox(taskInformationGroupBox);
        descriptionGroupBox->setObjectName(QString::fromUtf8("descriptionGroupBox"));
        gridLayout_3 = new QGridLayout(descriptionGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        descriptionEdit = new QTextEdit(descriptionGroupBox);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));

        gridLayout_3->addWidget(descriptionEdit, 0, 0, 1, 1);


        gridLayout_5->addWidget(descriptionGroupBox, 3, 0, 1, 1);

        periodicityGroupBox = new QGroupBox(taskInformationGroupBox);
        periodicityGroupBox->setObjectName(QString::fromUtf8("periodicityGroupBox"));
        horizontalLayout = new QHBoxLayout(periodicityGroupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        onceperiodicityRadioButton = new QRadioButton(periodicityGroupBox);
        onceperiodicityRadioButton->setObjectName(QString::fromUtf8("onceperiodicityRadioButton"));
        onceperiodicityRadioButton->setChecked(true);

        horizontalLayout->addWidget(onceperiodicityRadioButton);

        dailyPeriodicityRadioButton = new QRadioButton(periodicityGroupBox);
        dailyPeriodicityRadioButton->setObjectName(QString::fromUtf8("dailyPeriodicityRadioButton"));

        horizontalLayout->addWidget(dailyPeriodicityRadioButton);

        weeklyPeriodicityRadioButton = new QRadioButton(periodicityGroupBox);
        weeklyPeriodicityRadioButton->setObjectName(QString::fromUtf8("weeklyPeriodicityRadioButton"));

        horizontalLayout->addWidget(weeklyPeriodicityRadioButton);

        nonthlyPeriodicityRadioButton = new QRadioButton(periodicityGroupBox);
        nonthlyPeriodicityRadioButton->setObjectName(QString::fromUtf8("nonthlyPeriodicityRadioButton"));

        horizontalLayout->addWidget(nonthlyPeriodicityRadioButton);

        annualyPeriodicityRadioButton = new QRadioButton(periodicityGroupBox);
        annualyPeriodicityRadioButton->setObjectName(QString::fromUtf8("annualyPeriodicityRadioButton"));

        horizontalLayout->addWidget(annualyPeriodicityRadioButton);


        gridLayout_5->addWidget(periodicityGroupBox, 2, 0, 1, 1);

        groupNameGroupBox = new QGroupBox(taskInformationGroupBox);
        groupNameGroupBox->setObjectName(QString::fromUtf8("groupNameGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupNameGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupNameLineEdit = new QLineEdit(groupNameGroupBox);
        groupNameLineEdit->setObjectName(QString::fromUtf8("groupNameLineEdit"));

        horizontalLayout_2->addWidget(groupNameLineEdit);


        gridLayout_5->addWidget(groupNameGroupBox, 1, 0, 1, 1);


        gridLayout_2->addWidget(taskInformationGroupBox, 0, 0, 1, 3);

        startDateTimeGroupBox = new QGroupBox(Creator);
        startDateTimeGroupBox->setObjectName(QString::fromUtf8("startDateTimeGroupBox"));
        gridLayout_7 = new QGridLayout(startDateTimeGroupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        startDateTimeEdit = new QDateTimeEdit(startDateTimeGroupBox);
        startDateTimeEdit->setObjectName(QString::fromUtf8("startDateTimeEdit"));

        gridLayout_7->addWidget(startDateTimeEdit, 0, 1, 1, 1);

        chooseStartDateTimePushButton = new QPushButton(startDateTimeGroupBox);
        chooseStartDateTimePushButton->setObjectName(QString::fromUtf8("chooseStartDateTimePushButton"));

        gridLayout_7->addWidget(chooseStartDateTimePushButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(startDateTimeGroupBox, 1, 0, 1, 1);

        tabWidget->addTab(Creator, QString());
        Editor = new QWidget();
        Editor->setObjectName(QString::fromUtf8("Editor"));
        tabWidget->addTab(Editor, QString());
        Viewer = new QWidget();
        Viewer->setObjectName(QString::fromUtf8("Viewer"));
        gridLayout_8 = new QGridLayout(Viewer);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        viewTableWidget = new QTableWidget(Viewer);
        if (viewTableWidget->columnCount() < 4)
            viewTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        viewTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        viewTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        viewTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        viewTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        viewTableWidget->setObjectName(QString::fromUtf8("viewTableWidget"));
        viewTableWidget->setLayoutDirection(Qt::LeftToRight);
        viewTableWidget->setAutoFillBackground(false);
        viewTableWidget->horizontalHeader()->setVisible(false);
        viewTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        viewTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        viewTableWidget->horizontalHeader()->setStretchLastSection(true);
        viewTableWidget->verticalHeader()->setVisible(false);
        viewTableWidget->verticalHeader()->setCascadingSectionResizes(false);
        viewTableWidget->verticalHeader()->setHighlightSections(false);
        viewTableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        viewTableWidget->verticalHeader()->setStretchLastSection(true);

        gridLayout_8->addWidget(viewTableWidget, 0, 0, 1, 1);

        tabWidget->addTab(Viewer, QString());

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 0, 1, 1);


        retranslateUi(TaskManagerWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TaskManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *TaskManagerWidget)
    {
        TaskManagerWidget->setWindowTitle(QApplication::translate("TaskManagerWidget", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\267\320\260\320\264\320\260\321\207", nullptr));
        createTaskPushButton->setText(QApplication::translate("TaskManagerWidget", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        finishDateTimeGroupBox->setTitle(QApplication::translate("TaskManagerWidget", "\320\224\320\260\321\202\320\260 \320\270 \320\262\321\200\320\265\320\274\321\217 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275\320\270\321\217", nullptr));
        chooseDateTimePushButton->setText(QApplication::translate("TaskManagerWidget", "...", nullptr));
        taskInformationGroupBox->setTitle(QApplication::translate("TaskManagerWidget", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\267\320\260\320\264\320\260\321\207\320\265", nullptr));
        taskNameGroupBox->setTitle(QApplication::translate("TaskManagerWidget", "\320\230\320\274\321\217 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        descriptionGroupBox->setTitle(QApplication::translate("TaskManagerWidget", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        periodicityGroupBox->setTitle(QApplication::translate("TaskManagerWidget", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        onceperiodicityRadioButton->setText(QApplication::translate("TaskManagerWidget", "\320\236\320\264\320\275\320\276\320\272\321\200\320\260\321\202\320\275\320\276", nullptr));
        dailyPeriodicityRadioButton->setText(QApplication::translate("TaskManagerWidget", "\320\225\320\266\320\265\320\264\320\275\320\265\320\262\320\275\320\276", nullptr));
        weeklyPeriodicityRadioButton->setText(QApplication::translate("TaskManagerWidget", "\320\225\320\266\320\265\320\275\320\265\320\264\320\265\320\273\321\214\320\275\320\276", nullptr));
        nonthlyPeriodicityRadioButton->setText(QApplication::translate("TaskManagerWidget", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\320\276", nullptr));
        annualyPeriodicityRadioButton->setText(QApplication::translate("TaskManagerWidget", "\320\225\320\266\320\265\320\263\320\276\320\264\320\275\320\276", nullptr));
        groupNameGroupBox->setTitle(QApplication::translate("TaskManagerWidget", "\320\223\321\200\321\203\320\277\320\277\320\260 \320\267\320\260\320\264\320\260\321\207\320\270", nullptr));
        startDateTimeGroupBox->setTitle(QApplication::translate("TaskManagerWidget", "\320\224\320\260\321\202\320\260 \320\270 \320\262\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        chooseStartDateTimePushButton->setText(QApplication::translate("TaskManagerWidget", "...", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Creator), QApplication::translate("TaskManagerWidget", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Editor), QApplication::translate("TaskManagerWidget", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem = viewTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TaskManagerWidget", "\342\204\226", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = viewTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TaskManagerWidget", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = viewTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TaskManagerWidget", "\320\224\320\260\321\202\320\260 \320\270 \320\262\321\200\320\265\320\274\321\217 \320\275\320\260\321\207\320\260\320\273\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = viewTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TaskManagerWidget", "\320\224\320\260\321\202\320\260 \320\270 \320\262\321\200\320\265\320\274\321\217 \320\276\320\272\320\276\320\275\321\207\320\260\320\275\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Viewer), QApplication::translate("TaskManagerWidget", "\320\237\321\200\320\276\321\201\320\274\320\276\321\202\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskManagerWidget: public Ui_TaskManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGERWIDGET_H
