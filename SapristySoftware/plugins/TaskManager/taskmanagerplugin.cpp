#include "taskmanagerplugin.h"

#include "utils/taskmanagerconstants.h"

#include <QDebug>
#include <QMetaObject>

using namespace TaskManager;
using namespace TaskManager::Utils::Constants;

Q_DECLARE_METATYPE(QList<QSharedPointer<QObject>>)

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
  connect(this, &TaskManagerPlugin::taskListUpdated, _taskManagerWidget.get(), [this]() {
    _taskManagerWidget->setTasksList(_tasksList);
  });
}

void TaskManagerPlugin::preparePlugin()
{
  _taskManagerWidget->setTasksList(_tasksList);
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
  QSharedPointer<Task> task = QSharedPointer<Task>(new Task(nullptr));
  _tasksList.append(task);

  for (auto i : _tasksList) {
    _taskId = (_taskId < i->getId() ? i->getId() : _taskId);
  }

  _taskId++;

  task->setId(_taskId);
  task->setName(_taskManagerWidget->getCreatorTaskName());
  task->setGroup(_taskManagerWidget->getCreatorTaskGroupName());
  task->setPeriodicity(_taskManagerWidget->getCreatorTaskPeriodicity());
  task->setStatus(Utils::Constants::Status::InProgress);
  task->setDescription(_taskManagerWidget->getCreatorTaskDescription());
  task->setCreateDateTime(_taskManagerWidget->getCreatorTaskCreationTime());
  task->setStartDateTime(_taskManagerWidget->getCreatorTaskCreationTime());
  task->setCloseDateTime(_taskManagerWidget->getCreatorTaskCloseTime());

  emit taskListUpdated();
}

void TaskManagerPlugin::deparePlugin()
{
  qDebug() << "deparePlugin";
}



