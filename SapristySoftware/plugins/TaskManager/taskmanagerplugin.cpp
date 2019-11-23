#include "taskmanagerplugin.h"

#include <QDebug>

using namespace TaskManager;

TaskManagerPlugin::TaskManagerPlugin(QObject *parent)
{
  Q_UNUSED(parent);
}

TaskManagerPlugin::~TaskManagerPlugin()
{
  deinitializePlugin();
}

void TaskManagerPlugin::initializePlugin()
{
  setName("Менеджер задач");
  qDebug() << "initializePlugin";
}

void TaskManagerPlugin::preparePlugin()
{
  qDebug() << "preparePlugin";
}

void TaskManagerPlugin::deinitializePlugin()
{
  qDebug() << "deinitializePlugin";
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

void TaskManagerPlugin::deparePlugin()
{
  qDebug() << "deparePlugin";
}
