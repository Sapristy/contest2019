#ifndef VIEWERMODEL_H
#define VIEWERMODEL_H

#include "core/task.h"

#include <QAbstractItemModel>

class ViewerModel : public QAbstractTableModel
{
  Q_OBJECT

  QList<QSharedPointer<TaskManager::Task>> _taskList;
  QStringList _headerData;

public:
  explicit ViewerModel(QList<QSharedPointer<TaskManager::Task>> tasksList, QObject *parent = nullptr);

  ~ViewerModel();

  QVariant data( const QModelIndex& index, int role ) const;

  bool setData(const QModelIndex& index, const QVariant& value, int role);

  QVariant headerData(int section, Qt::Orientation orientation, int role) const;

  int columnCount(const QModelIndex& parent) const;

  int rowCount(const QModelIndex& parent) const;

  Qt::ItemFlags flags(const QModelIndex& index) const;

signals:

public slots:
  void insertRow(QSharedPointer<TaskManager::Task> task, const QModelIndex& parent);

  void removeRow(QSharedPointer<TaskManager::Task> task, const QModelIndex& parent);

  void updateTable(QList<QSharedPointer<TaskManager::Task>> taskList);
};

#endif // PLUGINLISTVIEWMODEL_H
