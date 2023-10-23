#ifndef EFFECT_H
#define EFFECT_H
#include "GameEntity.h"

class GameEntity;

class Effect {
 public:
  virtual void apply(GameEntity& entity) = 0;
};

#endif