//
// Created by student on 11.12.19.
//

#include "EntityModel.h"

Entity::EntityModel::EntityModel( double xVal, double yVal)
        : xVal(xVal), yVal(yVal) {
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


double Entity::EntityModel::getXVal() const { return xVal; }
double Entity::EntityModel::getYVal() const { return yVal; }
double Entity::EntityModel::getSizeX() const { return sizeX; }
double Entity::EntityModel::getSizeY() const { return sizeY; }
void Entity::EntityModel::setSizeX(double sizeX) { EntityModel::sizeX = sizeX; }
void Entity::EntityModel::setSizeY(double sizeY) { EntityModel::sizeY = sizeY; }
