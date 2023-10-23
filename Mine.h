#ifndef MINE_H
#define MINE_H

#include "Explosion.h"
#include "GameEntity.h"

class Mine : public GameEntity {
 public:
  Mine(int x, int y) : GameEntity(x, y, 'M'){};

  Explosion explode() {
    position = std::make_tuple(-1, -1);
    char newType = 'X';
    return Explosion(std::get<0>(position), std::get<1>(position));
  };
};

#endif
