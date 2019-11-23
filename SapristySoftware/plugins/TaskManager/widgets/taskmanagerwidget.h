#ifndef TASKMANAGERWIDGET_H
#define TASKMANAGERWIDGET_H

#include <QWidget>
#include <QDateTime>
#include <QLineEdit>
#include <QGroupBox>
#include <QButtonGroup>
#include <QRadioButton>
#include <QTextEdit>

#include <utils/taskmanagerconstants.h>

namespace Ui {
class TaskManagerWidget;
}

class TaskManagerWidget : public QWidget
{
  Q_OBJECT

public:
  explicit TaskManagerWidget(QWidget *parent = nullptr);
  ~TaskManagerWidget();

  QString getCreatorTaskName();
  QString getCreatorTaskGroupName();
  QString getCreatorTaskDescription();
  TaskManager::Utils::Constants::Periodicity getCreatorTaskPeriodicity();
  QDateTime getCreatorTaskCreationTime();
  QDateTime getCreatorTaskCloseTime();

private:
  Ui::TaskManagerWidget *ui;

  QButtonGroup _periodicityButtonGroup;

  TaskManager::Utils::Constants::Periodicity _periodicity;

  QLineEdit _getTaskNameEdit();
  QLineEdit _getTaskGroupNameEdit();
  QTextEdit _getTaskDescriptionEdit();
  QGroupBox _getPeriodicityGroupBox();
  QDateTimeEdit _getTaskCreationDateTime();
  QDateTimeEdit _getTaskCloseDateTime();

signals:
  void createTask();

public slots:
  void updateViewContent();
  void updatePeriodicity(QRadioButton* button);
private slots:
  void on_createTaskPushButton_clicked();
};

#endif // TASKMANAGERWIDGET_H
