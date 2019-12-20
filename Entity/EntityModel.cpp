//
// Created by student on 11.12.19.
//

#include "EntityModel.h"



void Entity::EntityModel::notifyObservers(Utils::Vector2D pos) {
    for (int i = 0; i < observers.size(); ++i) {
        observers[i]->update(pos);
    }
}

const Utils::Vector2D& Entity::EntityModel::getPosition() const { return position; }
void Entity::EntityModel::setPosition(const Utils::Vector2D& position) {
        EntityModel::position = position;
        notifyObservers(position)
;}
const Utils::Vector2D& Entity::EntityModel::getSize() const { return size; }
void Entity::EntityModel::setSize(const Utils::Vector2D& size) { EntityModel::size = size; }
Entity::EntityModel::EntityModel(const Utils::Vector2D& position) : position(position) {}
