#include "taskmanagerplugin.h"

#include "utils/taskmanagerconstants.h"

#include <QDebug>

using namespace TaskManager;
using namespace TaskManager::Utils::Constants;

TaskManagerPlugin::TaskManagerPlugin(QObject *parent) :
  QObject (parent),
  _name(taskManagerName),
  _id(taskManagerId),
  _taskManagerThread(new QThread())
{
  this->moveToThread(_taskManagerThread.get());
  connect(_taskManagerThread.get(), &QThread::finished, _taskManagerThread.get(), &QThread::deleteLater);
  _taskManagerThread->start();
}

TaskManagerPlugin::~TaskManagerPlugin()
{
  deinitializePlugin();

  _taskManagerThread->quit();

  if (QThread::currentThread() != this->thread())
    _taskManagerThread->wait();
}

void TaskManagerPlugin::initializePlugin()
{
  setName("Менеджер задач");
  _taskManagerWidget.reset(new TaskManagerWidget());
  _taskManagerWidget->show();

  connect(_taskManagerWidget.get(), &TaskManagerWidget::createTask, this, &TaskManagerPlugin::createTask);
}

void TaskManagerPlugin::preparePlugin()
{
  qDebug() << "preparePlugin";
}

void TaskManagerPlugin::deinitializePlugin()
{
  _taskManagerWidget.reset();
}

QIcon TaskManagerPlugin::getIcon() const
{
  return QIcon();
}

QString TaskManagerPlugin::getDescription() const
{
  return QString("description");
}

void TaskManagerPlugin::createSettingsWidget()
{

}

QSharedPointer<QWidget> TaskManagerPlugin::getSettingsWidget() const
{
  return QSharedPointer<QWidget>();
}

void TaskManagerPlugin::createMenu()
{

}

void TaskManagerPlugin::createTask()
{
  QSharedPointer<Task> task = QSharedPointer<Task>(new Task);
  _tasksList.append(task);
  task->setName(_taskManagerWidget->getCreatorTaskName());
  task->setGroup(_taskManagerWidget->getCreatorTaskGroupName());
  task->setPeriodicity(_taskManagerWidget->getCreatorTaskPeriodicity());
  task->setStatus(Utils::Constants::Status::NotPerformed);
  task->setDescription(_taskManagerWidget->getCreatorTaskDescription());
  task->setCreateDateTime(_taskManagerWidget->getCreatorTaskCreationTime());
  task->setCloseDateTime(_taskManagerWidget->getCreatorTaskCloseTime());
}

void TaskManagerPlugin::deparePlugin()
{
  qDebug() << "deparePlugin";
}
