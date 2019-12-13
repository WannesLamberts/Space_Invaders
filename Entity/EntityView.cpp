//
// Created by student on 11.12.19.
//

#include "EntityView.h"

sf::Drawable* Entity::EntityView::getShape() const { return shape; }

void Entity::EntityView::setShape(sf::Drawable* shape) { EntityView::shape = shape; }
