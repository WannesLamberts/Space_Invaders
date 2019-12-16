//
// Created by student on 11.12.19.
//

#include "EntityModel.h"

Entity::EntityModel::EntityModel(int healthPoints, double xVal, double yVal)
        : healthPoints(healthPoints), xVal(xVal), yVal(yVal) {
    //notify(getXVal(),getYval());
}

void Entity::EntityModel::notifyObservers(double x, double y) {
    for (int i = 0; i < observers.size(); ++i) {
        observers[i]->update(x, y);
    }
}

void Entity::EntityModel::setXVal(double xVal) {
    EntityModel::xVal = xVal;
    notifyObservers(xVal, yVal);
}

void Entity::EntityModel::setYval(double yVal) {
    EntityModel::yVal = yVal;
    notifyObservers(xVal, yVal);
}

void Entity::EntityModel::moveLeft() { setXVal(xVal - 1); }

void Entity::EntityModel::moveRight() { setXVal(xVal + 1); }
