#ifndef MINE_H
#define MINE_H

#include "Explosion.h"
#include "GameEntity.h"

class Mine : public GameEntity {
 public:
  Mine(int x, int y) : GameEntity(x, y, 'M'){};

  Explosion explode() {
    std::tuple<int, int> currentPos = getPos();
    char newType = 'X';
    return Explosion(std::get<0>(currentPos), std::get<1>(currentPos));
  };
};

#endif
