#include "task.h"

#include <QThread>

using namespace TaskManager;
using namespace TaskManager::Utils;

uint Task::getId() const
{
  return _id;
}

void Task::setId(const uint &id)
{
  _id = id;
}

Task::Task(QObject *parent) : QObject(parent)
{
  _taskThread.reset(new QThread());
  this->moveToThread(_taskThread.get());
  connect(_taskThread.get(), &QThread::finished, _taskThread.get(), &QThread::deleteLater);
  _taskThread->start();
}

Task::~Task()
{
  _taskThread->quit();

  if (QThread::currentThread() != this->thread())
    _taskThread->wait();
}

QDateTime Task::getStartDateTime() const
{
  return _startDateTime;
}

void Task::setStartDateTime(const QDateTime &startDateTime)
{
  _startDateTime = startDateTime;
}

QDateTime Task::getFinishDateTime() const
{
  return _finishDateTime;
}

void Task::setFinishDateTime(const QDateTime &finishDateTime)
{
  _finishDateTime = finishDateTime;
}

QDateTime Task::getCreateDateTime() const
{
  return _createDateTime;
}

void Task::setCreateDateTime(const QDateTime &createDateTime)
{
  _createDateTime = createDateTime;
}

QDateTime Task::getCloseDateTime() const
{
  return _closeDateTime;
}

void Task::setCloseDateTime(const QDateTime &closeDateTime)
{
  _closeDateTime = closeDateTime;
}

int Task::getExecutionTime() const
{
  return _executionTime;
}

void Task::setExecutionTime(int executionTime)
{
  _executionTime = executionTime;
}

QString Task::getGroup() const
{
  return _group;
}

void Task::setGroup(const QString &group)
{
  _group = group;
}

QString Task::getName() const
{
  return _name;
}

void Task::setName(const QString &name)
{
  _name = name;
}

QString Task::getDescription() const
{
  return _description;
}

void Task::setDescription(const QString &description)
{
  _description = description;
}

Constants::Status Task::getStatus() const
{
  return _status;
}

void Task::setStatus(const Utils::Constants::Status &status)
{
  _status = status;
}

Constants::Periodicity Task::getPeriodicity() const
{
  return _periodicity;
}

void Task::setPeriodicity(const Utils::Constants::Periodicity &periodicity)
{
  _periodicity = periodicity;
}
