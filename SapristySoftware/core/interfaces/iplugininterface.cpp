#include "iplugininterface.h"

using namespace Core::Interfaces;

uint IPluginInterface::getId() const
{
  return _id;
}

void IPluginInterface::setId(const uint &id)
{
  _id = id;
}

IPluginInterface::IPluginInterface() : _name(QObject::tr("Плагин")), _id(0)
{

}

IPluginInterface::~IPluginInterface()
{

}

QString IPluginInterface::getName() const
{
  return _name;
}

void IPluginInterface::setName(QString name)
{
  _name = name;
}
