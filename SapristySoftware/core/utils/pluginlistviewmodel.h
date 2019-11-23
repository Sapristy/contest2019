#ifndef PLUGINLISTVIEWMODEL_H
#define PLUGINLISTVIEWMODEL_H

#include <QAbstractItemModel>

class PluginListViewModel : public QAbstractTableModel
{
  Q_OBJECT

  QStringList _pluginList;

public:
  explicit PluginListViewModel(QStringList pluginList, QObject *parent = nullptr);

  ~PluginListViewModel();

  QVariant data( const QModelIndex& index, int role ) const;

  bool setData(const QModelIndex& index, const QVariant& value, int role);

  QVariant headerData(int section, Qt::Orientation orientation, int role) const;

  int columnCount(const QModelIndex& parent) const;

  int rowCount(const QModelIndex& parent) const;

  Qt::ItemFlags flags(const QModelIndex& index) const;

signals:

public slots:
};

#endif // PLUGINLISTVIEWMODEL_H
