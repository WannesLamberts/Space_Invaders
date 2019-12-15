//
// Created by student on 11.12.19.
//

#include "EntityModel.h"

Entity::EntityModel::EntityModel(int healthPoints, double xVal, double Yval)
    : healthPoints(healthPoints), xVal(xVal), Yval(Yval)
{
        //notify(getXVal(),getYval());
}
void Entity::EntityModel::notify(double x, double y) {
        getObserver()->update(x,y);
}
int Entity::EntityModel::getHealthPoints() const { return healthPoints; }
void Entity::EntityModel::setHealthPoints(int healthPoints) { EntityModel::healthPoints = healthPoints; }
double Entity::EntityModel::getXVal() const { return xVal; }
void Entity::EntityModel::setXVal(double xVal) {
        EntityModel::xVal = xVal;
        notify(getXVal(),getYval());
}
double Entity::EntityModel::getYval() const { return Yval; }
void Entity::EntityModel::setYval(double yval) { EntityModel::Yval = yval;
        notify(getXVal(),getYval());

}
void Entity::EntityModel::moveLeft() {setXVal(getXVal()-1);}
void Entity::EntityModel::moveRight() {setXVal(getXVal()+1);}
