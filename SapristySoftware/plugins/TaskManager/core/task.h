#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QString>
#include <QDateTime>
#include <QThread>
#include <QSharedPointer>

#include "../utils/taskManagerconstants.h"

namespace TaskManager {

class Task : public QObject
{
  Q_OBJECT

  Utils::Constants::Periodicity _periodicity {Utils::Constants::Periodicity::Once};
  Utils::Constants::Status _status {Utils::Constants::Status::NotPerformed};
  QDateTime _startDateTime;
  QDateTime _finishDateTime;
  QDateTime _createDateTime;
  QDateTime _closeDateTime;
  int _executionTime {0};
  QString _group;
  QString _name;
  QString _description;

  QSharedPointer<QThread> _taskThread;


public:
  explicit Task(QObject *parent = nullptr);
  ~Task();

signals:

public slots:
  QDateTime getStartDateTime() const;
  void setStartDateTime(const QDateTime &startDateTime);

  QDateTime getFinishDateTime() const;
  void setFinishDateTime(const QDateTime &finishDateTime);

  QDateTime getCreateDateTime() const;
  void setCreateDateTime(const QDateTime &createDateTime);

  QDateTime getCloseDateTime() const;
  void setCloseDateTime(const QDateTime &closeDateTime);

  int getExecutionTime() const;
  void setExecutionTime(int executionTime);

  QString getGroup() const;
  void setGroup(const QString &group);

  QString getName() const;
  void setName(const QString &name);

  QString getDescription() const;
  void setDescription(const QString &description);

  Utils::Constants::Status getStatus() const;
  void setStatus(const Utils::Constants::Status &status);

  Utils::Constants::Periodicity getPeriodicity() const;
  void setPeriodicity(const Utils::Constants::Periodicity &periodicity);
};

}

#endif // TASK_H
