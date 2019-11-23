#include "taskmanager.h"

#include "taskmanagerplugin.h"

#include <QSharedPointer>


QSharedPointer<Core::Interfaces::IPluginInterface> TaskManager::TaskManager::createPlugin(uint id)
{
  QSharedPointer<Core::Interfaces::IPluginInterface> plugin(QSharedPointer<Core::Interfaces::IPluginInterface>(new TaskManagerPlugin(nullptr)));
  plugin->setId(id);
  return plugin;
}
