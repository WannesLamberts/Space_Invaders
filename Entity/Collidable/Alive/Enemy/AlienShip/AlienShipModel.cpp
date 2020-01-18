//
// Created by wannes on 22.12.19.
//

#include "AlienShipModel.h"
#include <iostream>

Entity::AlienShipModel::AlienShipModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints,
                                       double speed)
    : EnemyModel(position, size, healthpoints, speed)
{
        fireCooldown=rand() % 500;
}
