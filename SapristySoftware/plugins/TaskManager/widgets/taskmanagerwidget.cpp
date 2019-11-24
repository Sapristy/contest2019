#include "taskmanagerwidget.h"
#include "ui_taskmanagerwidget.h"

#include <QAbstractButton>
#include <QStringList>

#include "viewermodel.h"

TaskManagerWidget::TaskManagerWidget(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::TaskManagerWidget)
{
  ui->setupUi(this);
  ui->editorTableWidget->horizontalHeader()->resizeSections(QHeaderView::ResizeToContents);
  ui->viewerTableView->setModel(new ViewerModel(_tasksList, this));

  _periodicityButtonGroup.addButton(ui->onceperiodicityRadioButton);
  _periodicityButtonGroup.addButton(ui->dailyPeriodicityRadioButton);
  _periodicityButtonGroup.addButton(ui->weeklyPeriodicityRadioButton);
  _periodicityButtonGroup.addButton(ui->nonthlyPeriodicityRadioButton);
  _periodicityButtonGroup.addButton(ui->annualyPeriodicityRadioButton);

  connect(&_periodicityButtonGroup,
          static_cast<void(QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonClicked),
          this,
          [this](QAbstractButton* abstractButton) {
            updatePeriodicity(qobject_cast<QRadioButton*>(abstractButton));
          } );

  connect( this,
           &TaskManagerWidget::taskListHasUpdated,
           qobject_cast<ViewerModel*>(ui->viewerTableView->model()),
           [this](){
    qobject_cast<ViewerModel*>(ui->viewerTableView->model())->updateTable(_tasksList);
  }
  );

  updatePeriodicity(ui->onceperiodicityRadioButton);
}

TaskManagerWidget::~TaskManagerWidget()
{
  delete ui;
}

QString TaskManagerWidget::getCreatorTaskName()
{
  return  ui->taskNameEdit->text();
}

QString TaskManagerWidget::getCreatorTaskGroupName()
{
  return ui->groupNameLineEdit->text();
}

QString TaskManagerWidget::getCreatorTaskDescription()
{
  return ui->descriptionEdit->toPlainText();
}

TaskManager::Utils::Constants::Periodicity TaskManagerWidget::getCreatorTaskPeriodicity()
{
  return _periodicity;
}

QDateTime TaskManagerWidget::getCreatorTaskCreationTime()
{
  return ui->startDateTimeEdit->dateTime();
}

QDateTime TaskManagerWidget::getCreatorTaskCloseTime()
{
  return ui->finishDateTimeEdit->dateTime();
}

QList<QSharedPointer<TaskManager::Task> > TaskManagerWidget::getTasksList() const
{
  return _tasksList;
}

void TaskManagerWidget::setTasksList(const QList<QSharedPointer<TaskManager::Task> > &tasksList)
{
//  _tasksList.clear();

//  for(auto i : tasksList)
//    _tasksList.append(qobject_cast<QSharedPointer<TaskManager::Task>>(i));

//  QList<QSharedPointer<QObject>> tempList;

//  for (auto i : _tasksList)
//    tempList.append(qobject_cast<QSharedPointer<QObject>>(i));
  _tasksList = tasksList;

  emit taskListHasUpdated();
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
