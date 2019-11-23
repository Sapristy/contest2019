#ifndef IPLUGININTERFACE_H
#define IPLUGININTERFACE_H

#include <QString>
#include <QIcon>
#include <QMenu>

#include "iplugin.h"

namespace Core {
namespace Interfaces {

class IPluginInterface
{
  QString _name;
  uint _id;

public:

  IPluginInterface();
  virtual ~IPluginInterface();

  /*!
   * \brief initializeModule Инициализация плагина.
   */
  virtual void initializePlugin() = 0;

  /*!
   * \brief preparePlugin Подготовка плагина к работе.
   */
  virtual void preparePlugin() = 0;

  /*!
   * \brief deparePlugin Подготовка плагина к завершению работы.
   */
  virtual void deparePlugin() = 0;

  /*!
   * \brief deinitializePlugin Деинитиализация плагина.
   */
  virtual void deinitializePlugin() = 0;

  /*!
   * \brief getName Получение имени плагина.
   * \return Имя плагина.
   */
  virtual QString getName() const;

  /*!
   * \brief setName Установка имени плагина.
   * \param name Имя плагина.
   */
  virtual void setName(QString name);

  virtual QIcon getIcon() const = 0;

  virtual QString getDescription() const = 0;

  virtual void createSettingsWidget() = 0;

  virtual QSharedPointer<QWidget> getSettingsWidget() const = 0;

  virtual void createMenu() = 0;

//  virtual QSharedPointer<QMenu> getMenu() const = 0;

  virtual uint getId() const;

  virtual void setId(const uint &id);
};

}
}

#endif // IPLUGININTERFACE_H
