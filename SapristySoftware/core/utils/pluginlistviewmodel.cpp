#include "pluginlistviewmodel.h"

#include <QBrush>

#include "constants.h"

PluginListViewModel::PluginListViewModel(QStringList pluginList, QObject *parent) :
  QAbstractTableModel (parent),
  _pluginList(pluginList)
{

}

PluginListViewModel::~PluginListViewModel()
{

}

QVariant PluginListViewModel::data(const QModelIndex &index, int role) const
{
  if (!index.isValid())
    return QVariant();

  if (!((role == Qt::DisplayRole) ||
        (role == Qt::BackgroundRole)))
    return QVariant();

  if (role == Qt::DisplayRole)
    return _pluginList.at(index.row());

  if (role == Qt::BackgroundRole)
    return QBrush(Qt::lightGray);

  return QVariant();
}

bool PluginListViewModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
  Q_UNUSED(index);
  Q_UNUSED(value);
  Q_UNUSED(role);

  return false;
}

QVariant PluginListViewModel::headerData(int section, Qt::Orientation orientation, int role) const
{
  if ((role != Qt::DisplayRole) ||
      (orientation != Qt::Horizontal) ||
      (section != 0))
    return QVariant();

  return Constants::programmsHeader;
}

int PluginListViewModel::columnCount(const QModelIndex &parent) const
{
  Q_UNUSED(parent);

  return Constants::pluginColumnCount;
}

int PluginListViewModel::rowCount(const QModelIndex &parent) const
{
  return (parent.isValid() ? 0 : _pluginList.length());
}

Qt::ItemFlags PluginListViewModel::flags(const QModelIndex &index) const
{
  return (index.isValid() ? (QAbstractItemModel::flags(index) | Qt::ItemIsSelectable) : QAbstractItemModel::flags(index));
}
