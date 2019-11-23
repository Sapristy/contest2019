#ifndef TASKMANAGERPLUGIN_H
#define TASKMANAGERPLUGIN_H

#include <QObject>
#include <QSharedPointer>
#include <QMenu>

#include "taskmanagerexport.h"

#include <../../core/interfaces/iplugininterface.h>

namespace TaskManager {

class TASK_MANAGER_EXPORT TaskManagerPlugin : public QObject, public Core::Interfaces::IPluginInterface
{
  Q_OBJECT

  QString _name;
  QString _id;

public:
  explicit TaskManagerPlugin(QObject *parent = nullptr);
  ~TaskManagerPlugin() override;

  virtual void initializePlugin() override;

  /*!
   * \brief preparePlugin Подготовка плагина к работе.
   */
  virtual void preparePlugin() override;

  /*!
   * \brief deparePlugin Подготовка плагина к завершению работы.
   */
  virtual void deparePlugin() override;

  /*!
   * \brief deinitializePlugin Деинитиализация плагина.
   */
  virtual void deinitializePlugin() override;

  virtual QIcon getIcon() const override;

  virtual QString getDescription() const override;

  virtual void createSettingsWidget() override;

  virtual QSharedPointer<QWidget> getSettingsWidget() const override;

  virtual void createMenu() override;

signals:

public slots:
};

}

#endif // TASKMANAGERPLUGIN_H
