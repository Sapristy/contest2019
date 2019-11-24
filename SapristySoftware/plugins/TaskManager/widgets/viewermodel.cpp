#include "viewermodel.h"

#include <QBrush>

#include <utils/taskmanagerconstants.h>

using namespace TaskManager::Utils::Constants;

ViewerModel::ViewerModel(QList<QSharedPointer<TaskManager::Task>> tasksList, QObject *parent) :
  QAbstractTableModel (parent),
  _taskList(tasksList)
{
  _headerData << "№"
              << "Группа"
              << "Имя"
              << "Периодичность"
              << "Ожидаемое время начала"
              << "Ожидамое время окончания"
              << "Фактическое время начала"
              << "Фактическое время окончания"
              << "Время выполнения"
              << "Статус"
              << "Описание";

}

ViewerModel::~ViewerModel()
{

}

QVariant ViewerModel::data(const QModelIndex &index, int role) const
{
  if (!index.isValid())
    return QVariant();

  if (int row {index.row()}; row >= _taskList.length())
    return QVariant();

  if (!((role == Qt::DisplayRole) ||
        (role == Qt::BackgroundRole)))
    return QVariant();

  if (role == Qt::DisplayRole) {
    switch(index.column()) {

    case 0:
      return _taskList.at(index.row())->getId();

    case 1:
      return _taskList.at(index.row())->getGroup();

    case 2:
      return _taskList.at(index.row())->getName();

    case 3:

      switch((int)_taskList.at(index.row())->getPeriodicity()) {
      case 0:
        return QVariant(QString("Однократно"));
      case 1:
        return QVariant(QString("Ежедневно"));
      case 2:
        return QVariant(QString("Еженедельно"));
      case 3:
        return QVariant(QString("Ежемесячно"));
      case 4:
        return QVariant(QString("Ежегодно"));
      }

      return QVariant();/*;*/

    case 4:
      return _taskList.at(index.row())->getCreateDateTime();

    case 5:
      return _taskList.at(index.row())->getCloseDateTime();

    case 6:
      return _taskList.at(index.row())->getStartDateTime();

    case 7:
      return _taskList.at(index.row())->getFinishDateTime();

    case 8:
      return _taskList.at(index.row())->getExecutionTime();

    case 9:

      switch((int)_taskList.at(index.row())->getStatus()) {
      case 0:
        return QVariant(QString("Не выполнено"));
      case 1:
        return QVariant(QString("В работе"));
      case 2:
        return QVariant(QString("Выполнено"));
      }

      return QVariant();

    case 10:
      return _taskList.at(index.row())->getDescription();
    }
  }


  if (role == Qt::BackgroundRole)
    return QBrush(Qt::lightGray);

  return QVariant();
}

bool ViewerModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
  Q_UNUSED(index)
  Q_UNUSED(value)
  Q_UNUSED(role)

  return false;
}

QVariant ViewerModel::headerData(int section, Qt::Orientation orientation, int role) const
{
  if ((role != Qt::DisplayRole) ||
      (orientation != Qt::Horizontal) ||
      (section != 0))
    return QVariant();

  return _headerData;
}

int ViewerModel::columnCount(const QModelIndex &parent) const
{
  Q_UNUSED(parent)

  return tasksViewerCollumnCount;
}

int ViewerModel::rowCount(const QModelIndex &parent) const
{
  return (parent.isValid() ? 0 : _taskList.length());
}

Qt::ItemFlags ViewerModel::flags(const QModelIndex &index) const
{
  return (index.isValid() ? (QAbstractItemModel::flags(index) | Qt::ItemIsSelectable) : QAbstractItemModel::flags(index));
}

void ViewerModel::insertRow(QSharedPointer<TaskManager::Task> task , const QModelIndex &parent)
{
  Q_UNUSED(parent)

  beginInsertRows(QModelIndex(), _taskList.length(), _taskList.length());
  _taskList.append(task);
  endInsertRows();
}

void ViewerModel::removeRow(QSharedPointer<TaskManager::Task> task, const QModelIndex &parent)
{
  Q_UNUSED(parent)

  int i = _taskList.indexOf(task);

  beginRemoveRows(QModelIndex(), i, i);
  _taskList.removeAt(i);
  endRemoveRows();
}

void ViewerModel::updateTable(QList<QSharedPointer<TaskManager::Task>> taskList)
{
  beginResetModel();
//  _taskList.clear();

//  for(auto i : taskList)
//    _taskList.append(qobject_cast<QSharedPointer<TaskManager::Task>>(i));
  _taskList = taskList;

  endResetModel();
}
