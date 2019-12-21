//
// Created by wannes on 21.12.19.
//

#include "BulletModel.h"
void Entity::BulletModel::travel() {
        setPosition(Utils::Vector2D(position.x, position.y-speed));
}
Entity::BulletModel::BulletModel(const Utils::Vector2D& position, const Utils::Vector2D& size, double speed)
    : EntityModel(position, size), speed(speed)
{
}
