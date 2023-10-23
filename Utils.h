#ifndef UTILS_H
#define UTILS_H
#include <cmath>
#include <cstdlib>

#include "GameEntity.h"

class Utils {
 public:
  static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight) {
    int x = std::rand() % gridWidth;
    int y = std::rand() % gridHeight;
    return std::make_tuple(x, y);
  }

  static double calculateDistance(std::tuple<int, int> pos1,
                                  std::tuple<int, int> pos2) {
    int x1, y1, x2, y2;
    std::tie(x1, y1) = pos1;
    std::tie(x2, y2) = pos2;

    double distance = std::sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return distance;
  }
};

#endif