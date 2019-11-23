#ifndef TASK_MANAGER_CONSTANTS_H
#define TASK_MANAGER_CONSTANTS_H

#include <QString>

namespace TaskManager {
namespace Utils {
namespace Constants {

enum class Periodicity : int
{
  Once,
  Daily,
  Weekly,
  Nonthly,
  Annually
};

enum class Status : int
{
  NotPerformed,
  InProgress,
  Done,
};

const QString taskManagerName { "Менеджер задач" };
const uint taskManagerId { 0 };

}
}
}

#endif // CONSTANTS_H
