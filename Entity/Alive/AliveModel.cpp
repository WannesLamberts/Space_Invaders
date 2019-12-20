#include "AliveModel.h"
//
// Created by wannes on 20.12.19.
//
void Entity::AliveModel::moveLeft() { setXVal(xVal - 0.1); }

void Entity::AliveModel::moveRight() { setXVal(xVal + 0.1); }
Entity::AliveModel::AliveModel(double xVal, double yval, int healthpoints)
    : EntityModel(xVal, yval), healthpoints(healthpoints)
{
}
