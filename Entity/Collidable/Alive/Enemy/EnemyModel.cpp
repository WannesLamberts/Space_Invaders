//
// Created by wannes on 18.01.20.
//

#include "EnemyModel.h"
Entity::EnemyModel::EnemyModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints,
                               double speed)
    : AliveModel(position, size, healthpoints, speed)
{
        right = true;
}
bool Entity::EnemyModel::moveDown() { return setPosition(Utils::Vector2D(getPosition().x, getPosition().y + 0.5)); }
bool Entity::EnemyModel::isRight() const { return right; }
void Entity::EnemyModel::setRight(bool right) { EnemyModel::right = right; }
