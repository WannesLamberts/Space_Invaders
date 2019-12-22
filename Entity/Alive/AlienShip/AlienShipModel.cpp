//
// Created by wannes on 22.12.19.
//

#include "AlienShipModel.h"

Entity::AlienShipModel::AlienShipModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints,
                                       double speed)
    : AliveModel(position, size, healthpoints, speed)
{
}
