#include <iostream>

#include "Explosion.h"
#include "Mine.h"
#include "Ship.h"

int main() {
  // Create a Ship and a Mine
  Ship ship(1, 1);
  Mine mine(5, 5);

  // Move the ship
  ship.move(2, 3);

  // Explode the mine
  Explosion explosion = mine.explode();

  // Display ship and mine information
  std::cout << "Ship position: (" << std::get<0>(ship.getPos()) << ", "
            << std::get<1>(ship.getPos()) << ")\n";
  std::cout << "Mine position: (" << std::get<0>(mine.getPos()) << ", "
            << std::get<1>(mine.getPos()) << ")\n";

  // Display explosion information
  std::cout << "Explosion position: (" << std::get<0>(explosion.getPos())
            << ", " << std::get<1>(explosion.getPos()) << ")\n";
  std::cout << "Explosion type: " << explosion.getType() << "\n";

  return 0;
}