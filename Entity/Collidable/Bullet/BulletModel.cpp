//
// Created by wannes on 21.12.19.
//

#include "BulletModel.h"
#include <iostream>
bool Entity::BulletModel::travel() {
        return setPosition(Utils::Vector2D(position.x, position.y-speed));

}
Entity::BulletModel::BulletModel(const Utils::Vector2D& position, const Utils::Vector2D& size, double speed, bool friendly,std::shared_ptr<ControllerAbstract> owner)
    : EntityModel(position, size), speed(speed),friendly(friendly),owner(owner)
{
}
bool Entity::BulletModel::isFriendly() const { return friendly; }
const std::shared_ptr<ControllerAbstract>& Entity::BulletModel::getOwner() const { return owner; }
void Entity::BulletModel::setOwner(const std::shared_ptr<ControllerAbstract>& owner) { BulletModel::owner = owner; }
