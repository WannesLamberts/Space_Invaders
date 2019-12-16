//
// Created by student on 11.12.19.
//

#include "EntityView.h"
#include <iostream>

void Entity::EntityView::update(double x, double y) {
        shape.setPosition(Utils::Transformation::getInstance().transX(x,800),Utils::Transformation::getInstance().transY(y,600));
}