#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "core/utils/pluginmanager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT
  QSharedPointer<Core::Utils::PluginManager> _pluginManager;

public:
  explicit MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_runPluginPushButton_clicked();

private:
  Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
