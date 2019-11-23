#ifndef TASKMANAGEREXPORT_H
#define TASKMANAGEREXPORT_H

#include <QtCore/qglobal.h>

#if defined (TASK_MANAGER)
  #define TASK_MANAGER_EXPORT Q_DECL_EXPORT
#elif defined (TASK_MANAGER_UNIT_TESTS)
  #define TASK_MANAGER_EXPORT
#else
  #define TASK_MANAGER_EXPORT Q_DECL_IMPORT
#endif

#endif // TASKMANAGEREXPORT_H