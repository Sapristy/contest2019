#include "pluginmanager.h"

#include "constants.h"
#include "../interfaces/iplugininterface.h"

#include <QCoreApplication>
#include <QPluginLoader>
#include <QDebug>

using namespace Constants;
using namespace Core::Utils;
using namespace Core::Interfaces;

QDir PluginManager::getAppDir() const
{
  return _appDir;
}

QDir PluginManager::getPluginDir() const
{
  return _pluginDir;
}

QStringList PluginManager::getPluginList() const
{
  return _pluginList;
}

void PluginManager::loadPlugin(QString name, uint id)
{
  QPluginLoader loader(name);

  if (auto plugin {loader.instance()}; plugin) {
    qobject_cast<IPlugin*>(plugin)->createPlugin(id).get()->initializePlugin();
  }

}

PluginManager::PluginManager()
{
  initPluginPath();
  initPluginsList();
}

void PluginManager::initPluginPath()
{
  _appDir.setPath(QCoreApplication::applicationDirPath());
  _pluginDir.setPath(_appDir.path());
  _pluginDir.mkdir(pluginDir);
  _pluginDir.cd(pluginDir);
  QCoreApplication::addLibraryPath(_pluginDir.absolutePath());
}

void PluginManager::initPluginsList()
{
  _pluginList.clear();

  qDebug() << QString("%1").arg(_pluginDir.path());

  QStringList fillesList {_pluginDir.entryList(QDir::Filter::Files, QDir::SortFlag::Name)};

  for (auto filleName : fillesList) {
    if (filleName.endsWith(dllExtension))
      _pluginList.append(filleName);
  }

  qDebug() << QString("%1").arg(_pluginList.length());
}
