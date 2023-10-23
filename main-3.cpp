#include <iostream>

#include "Game.h"

int main() {
  Game myGame;
  std::vector<GameEntity*> entities = myGame.get_entities();

  std::cout << "Initial Game Entities:\n";
  for (auto entity : entities) {
    std::cout << "Type: " << entity->getType() << ", Position: ("
              << std::get<0>(entity->getPos()) << ", "
              << std::get<1>(entity->getPos()) << ")\n";
  }

  myGame.gameLoop(5, 2.0);

  std::cout << "Game Entities after Simulation:\n";
  for (auto entity : myGame.get_entities()) {
    std::cout << "Type: " << entity->getType() << ", Position: ("
              << std::get<0>(entity->getPos()) << ", "
              << std::get<1>(entity->getPos()) << ")\n";
  }

  // Clean up the entities to avoid memory leaks
  for (auto entity : entities) {
    delete entity;
  }

  return 0;
}