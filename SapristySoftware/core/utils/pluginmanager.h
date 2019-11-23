#ifndef PLUGINMANAGER_H
#define PLUGINMANAGER_H

#include <QDir>

namespace Core {
namespace Utils {

class PluginManager : public QObject
{
  Q_OBJECT

  QDir _appDir;
  QDir _pluginDir;
  QStringList _pluginList;

public:
  PluginManager();

  void initPluginPath();

  void initPluginsList();
  QDir getAppDir() const;
  QDir getPluginDir() const;
  QStringList getPluginList() const;

  void loadPlugin(QString name, uint id = 0);

public slots:
//  void initPlugin();
};

}
}

#endif // PLUGINMANAGER_H
