#ifndef TASKMANAGERWIDGET_H
#define TASKMANAGERWIDGET_H

#include <QWidget>
#include <QDateTime>
#include <QLineEdit>
#include <QGroupBox>
#include <QButtonGroup>
#include <QRadioButton>
#include <QTextEdit>

#include "core/task.h"
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

  QList<QSharedPointer<TaskManager::Task>> _tasksList;

signals:
  void createTask();
  void taskListHasUpdated();

public slots:
  void updatePeriodicity(QRadioButton* button);
  QList<QSharedPointer<TaskManager::Task> > getTasksList() const;
  void setTasksList(const QList<QSharedPointer<TaskManager::Task>> &tasksList);

private slots:
  void on_createTaskPushButton_clicked();
};

#endif // TASKMANAGERWIDGET_H
