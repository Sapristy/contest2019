#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "taskmanagerplugin.h"

#include "taskmanagerexport.h"

#include <../../core/interfaces/iplugininterface.h>

namespace TaskManager {

class TaskManager : public QObject, public Core::Interfaces::IPlugin
{
  Q_OBJECT
  Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QGenericPluginFactoryInterface" FILE "TaskManager.json")
  Q_INTERFACES(Core::Interfaces::IPlugin)

public:
  virtual QSharedPointer<Core::Interfaces::IPluginInterface> createPlugin(uint id = 0);

private:
};

}

#endif // TASKMANAGER_H
