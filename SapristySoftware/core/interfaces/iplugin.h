#ifndef IPLUGIN_H
#define IPLUGIN_H

#include <QObject>
#include <QSharedPointer>
#include <QtPlugin>

#include "../utils/constants.h"

namespace Core {
namespace Interfaces {

class IPluginInterface;

class IPlugin
{
public:
  virtual ~IPlugin();

  virtual QSharedPointer<IPluginInterface> createPlugin(uint id = 0) = 0;

signals:

public slots:
};

}
}

Q_DECLARE_INTERFACE(Core::Interfaces::IPlugin, "ru.sapristy.IPlugin")

#endif // IPLUGIN_H
