#include <ctime>
#include <iostream>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

int main() {
  std::srand(
      static_cast<unsigned>(std::time(nullptr)));  // Initialize random seed

  int gridWidth = 5;
  int gridHeight = 5;

  // Generate random positions and calculate distances
  for (int i = 0; i < 5; i++) {
    std::tuple<int, int> pos1 = Utils::generateRandomPos(gridWidth, gridHeight);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(gridWidth, gridHeight);

    double distance = Utils::calculateDistance(pos1, pos2);

    std::cout << "Position 1: (" << std::get<0>(pos1) << ", "
              << std::get<1>(pos1) << ")" << std::endl;
    std::cout << "Position 2: (" << std::get<0>(pos2) << ", "
              << std::get<1>(pos2) << ")" << std::endl;
    std::cout << "Distance: " << distance << std::endl;
  }

  return 0;
}