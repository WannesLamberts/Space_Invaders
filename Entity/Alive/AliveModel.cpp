#include "AliveModel.h"
#include <iostream>
//
// Created by wannes on 20.12.19.
//

void Entity::AliveModel::moveLeft()
{
        setPosition(Utils::Vector2D(position.x - 0.1, position.y));
}

void Entity::AliveModel::moveRight() { setPosition(Utils::Vector2D(position.x + 0.1, position.y)); }
Entity::AliveModel::AliveModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints)
    : EntityModel(position, size), healthpoints(healthpoints)
{
}
