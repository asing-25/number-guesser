#include <random> 

int getRand(int min, int max)
{
  std::random_device rd{};
  std::seed_seq ss{rd(), rd(), rd(), rd(), rd(), rd(), rd(), rd()};
  std::mt19937 mt{ss};
  std::uniform_int_distribution hilo(1, 100);
  return hilo(mt);
}
