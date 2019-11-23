#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "core/utils/pluginlistviewmodel.h"

#include <QStringListModel>
#include <QModelIndex>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  _pluginManager.reset(new Core::Utils::PluginManager());
  QSharedPointer<QStringListModel> pluginListModel(new QStringListModel(this));
  pluginListModel->setStringList(_pluginManager->getPluginList());
  ui->listView->setModel(pluginListModel.get());

  connect(ui->listView->selectionModel(),
          &QItemSelectionModel::currentRowChanged,
          this,
          [this, pluginListModel](const QModelIndex rowIndex, const QModelIndex) {
            ui->pluginNameLabel->setText(pluginListModel->data(rowIndex).toString());
            ui->pluginTextBrowser->setText(pluginListModel->data(rowIndex).toString());
            ui->runPluginPushButton->setEnabled(true);
          });
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_runPluginPushButton_clicked()
{
  _pluginManager->loadPlugin(ui->pluginNameLabel->text());
}
