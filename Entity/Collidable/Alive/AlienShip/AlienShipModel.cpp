//
// Created by wannes on 22.12.19.
//

#include "AlienShipModel.h"

Entity::AlienShipModel::AlienShipModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints,
                                       double speed)
    : AliveModel(position, size, healthpoints, speed)
{
        right=true;
}
bool Entity::AlienShipModel::isRight() const { return right; }
void Entity::AlienShipModel::setRight(bool right) { AlienShipModel::right = right; }

bool Entity::AlienShipModel::moveDown() {
        return setPosition(Utils::Vector2D(getPosition().x,getPosition().y+0.5));
}
