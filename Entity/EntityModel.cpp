//
// Created by student on 11.12.19.
//

#include "EntityModel.h"
#include <iostream>

void Entity::EntityModel::notifyObservers()
{
        for (int i = 0; i < observers.size(); ++i) {
                observers[i]->update();
        }
}

const Utils::Vector2D& Entity::EntityModel::getPosition() const { return position; }
bool Entity::EntityModel::setPosition(const Utils::Vector2D& position)
{
        if (validPosition(position)) {
                EntityModel::position = position;
                notifyObservers();
                return true;
        }
        return false;
}
const Utils::Vector2D& Entity::EntityModel::getSize() const { return size; }
void Entity::EntityModel::setSize(const Utils::Vector2D& size) { EntityModel::size = size; }
Entity::EntityModel::EntityModel(const Utils::Vector2D& position, const Utils::Vector2D& size)
    : position(position), size(size)
{
}
bool Entity::EntityModel::validPosition(Utils::Vector2D v)
{
        return (v.x + getSize().x / 2 <= 4 && v.x - getSize().x / 2 >= -4 && v.y + getSize().y / 2 >= -3 &&
                v.y + getSize().y / 2 <= 3);
}
