#include "taskmanagerwidget.h"
#include "ui_taskmanagerwidget.h"

#include <QAbstractButton>

TaskManagerWidget::TaskManagerWidget(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::TaskManagerWidget)
{
  ui->setupUi(this);
  qobject_cast<QTableWidget>(ui->Viewer->layout()->takeAt(0)->widget())
      .horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);

  _periodicityButtonGroup.addButton(qobject_cast<QAbstractButton*>(_getPeriodicityGroupBox().layout()->takeAt(0)->widget()));
  _periodicityButtonGroup.addButton(qobject_cast<QAbstractButton*>(_getPeriodicityGroupBox().layout()->takeAt(1)->widget()));
  _periodicityButtonGroup.addButton(qobject_cast<QAbstractButton*>(_getPeriodicityGroupBox().layout()->takeAt(2)->widget()));
  _periodicityButtonGroup.addButton(qobject_cast<QAbstractButton*>(_getPeriodicityGroupBox().layout()->takeAt(3)->widget()));
  _periodicityButtonGroup.addButton(qobject_cast<QAbstractButton*>(_getPeriodicityGroupBox().layout()->takeAt(4)->widget()));

  connect(&_periodicityButtonGroup,
          static_cast<void(QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonClicked),
          this,
          [this](QAbstractButton* abstractButton) {
            updatePeriodicity(qobject_cast<QRadioButton*>(abstractButton));
          } );
}

TaskManagerWidget::~TaskManagerWidget()
{
  delete ui;
}

QString TaskManagerWidget::getCreatorTaskName()
{
  return _getTaskNameEdit().text();
}

QString TaskManagerWidget::getCreatorTaskGroupName()
{
  return _getTaskGroupNameEdit().text();
}

QString TaskManagerWidget::getCreatorTaskDescription()
{
  return _getTaskDescriptionEdit().toPlainText();
}

TaskManager::Utils::Constants::Periodicity TaskManagerWidget::getCreatorTaskPeriodicity()
{
  return _periodicity;
}

QDateTime TaskManagerWidget::getCreatorTaskCreationTime()
{
  return _getTaskCreationDateTime().dateTime();
}

QDateTime TaskManagerWidget::getCreatorTaskCloseTime()
{
  return _getTaskCloseDateTime().dateTime();
}

QLineEdit TaskManagerWidget::_getTaskNameEdit()
{
  return qobject_cast<QLineEdit>(
           qobject_cast<QGroupBox>(
             qobject_cast<QGroupBox>(ui->Creator->layout()->takeAt(0)->widget())
             .layout()->takeAt(0)->widget())
           .layout()->takeAt(0)->widget());
}

QLineEdit TaskManagerWidget::_getTaskGroupNameEdit()
{
  return qobject_cast<QLineEdit>(
           qobject_cast<QGroupBox>(
             qobject_cast<QGroupBox>(ui->Creator->layout()->takeAt(0)->widget())
             .layout()->takeAt(1)->widget())
           .layout()->takeAt(0)->widget());
}

QTextEdit TaskManagerWidget::_getTaskDescriptionEdit()
{
  return qobject_cast<QTextEdit>(
           qobject_cast<QGroupBox>(
             qobject_cast<QGroupBox>(ui->Creator->layout()->takeAt(0)->widget())
             .layout()->takeAt(3)->widget())
           .layout()->takeAt(0)->widget());
}

QGroupBox TaskManagerWidget::_getPeriodicityGroupBox()
{
  return qobject_cast<QGroupBox>(
           qobject_cast<QGroupBox>(ui->Creator->layout()->takeAt(0)->widget())
        .layout()->takeAt(2)->widget());
}

QDateTimeEdit TaskManagerWidget::_getTaskCreationDateTime()
{
  return qobject_cast<QDateTimeEdit>(
           qobject_cast<QGroupBox>(ui->Creator->layout()->takeAt(1)->widget())
         .layout()->takeAt(0)->widget());
}

QDateTimeEdit TaskManagerWidget::_getTaskCloseDateTime()
{
  return qobject_cast<QDateTimeEdit>(
           qobject_cast<QGroupBox>(ui->Creator->layout()->takeAt(2)->widget())
         .layout()->takeAt(0)->widget());
}

void TaskManagerWidget::updatePeriodicity(QRadioButton* button)
{
  if (button->text() == "Однократно") {
    _periodicity = TaskManager::Utils::Constants::Periodicity::Once;
  } else if (button->text() == "Ежедневно") {
    _periodicity = TaskManager::Utils::Constants::Periodicity::Daily;
  } else if (button->text() == "Еженедельно") {
    _periodicity = TaskManager::Utils::Constants::Periodicity::Weekly;
  } else if (button->text() == "Ежемесячно") {
    _periodicity = TaskManager::Utils::Constants::Periodicity::Nonthly;
  }else if (button->text() == "Ежегодно") {
    _periodicity = TaskManager::Utils::Constants::Periodicity::Annually;
  }
}

void TaskManagerWidget::on_createTaskPushButton_clicked()
{
    emit createTask();
}
