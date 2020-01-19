//
// Created by wannes on 21.12.19.
//

#include "BulletModel.h"
#include <iostream>
bool Entity::BulletModel::travel() { return setPosition(Utils::Vector2D(position.x, position.y - speed)); }
Entity::BulletModel::BulletModel(const Utils::Vector2D& position, const Utils::Vector2D& size, double speed,
                                 bool friendly)
    : EntityModel(position, size), speed(speed), friendly(friendly)
{
}
bool Entity::BulletModel::isFriendly() const { return friendly; }
