#include <iostream>

#include "Game.h"

int main() {
  Game game;
  std::vector<GameEntity*> entities = game.initGame(3, 3, 10, 10);

  std::cout << "Initial Game Entities:\n";
  for (GameEntity* entity : entities) {
    std::cout << "Type: " << entity->getType() << ", Position: ("
              << std::get<0>(entity->getPos()) << ", "
              << std::get<1>(entity->getPos()) << ")\n";
  }

  game.gameLoop(5, 2.0);

  std::cout << "Game Entities after Simulation:\n";
  for (GameEntity* entity : game.getEntities()) {
    std::cout << "Type: " << entity->getType() << ", Position: ("
              << std::get<0>(entity->getPos()) << ", "
              << std::get<1>(entity->getPos()) << ")\n";
  }

  // Clean up the entities to avoid memory leaks
  for (GameEntity* entity : entities) {
    delete entity;
  }

  return 0;
}