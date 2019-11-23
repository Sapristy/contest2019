#ifndef CONSTANTS_H
#define CONSTANTS_H

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

}
}
}

#endif // CONSTANTS_H
