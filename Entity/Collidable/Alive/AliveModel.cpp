#include "AliveModel.h"
#include <iostream>
//
// Created by wannes on 20.12.19.
//

void Entity::AliveModel::moveLeft()
{
        setPosition(Utils::Vector2D(position.x - speed, position.y));
}

void Entity::AliveModel::moveRight() { setPosition(Utils::Vector2D(position.x + speed, position.y)); }

int Entity::AliveModel::getHealthpoints() const { return healthpoints; }
void Entity::AliveModel::setHealthpoints(int healthpoints) { AliveModel::healthpoints = healthpoints; }
int Entity::AliveModel::getFireCooldown() const { return fireCooldown; }
void Entity::AliveModel::setFireCooldown(int fireCooldown) { AliveModel::fireCooldown = fireCooldown; }
Entity::AliveModel::AliveModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints,
                               double speed)
    : EntityModel(position, size), healthpoints(healthpoints), speed(speed)
{
        fireCooldown=0;
}
