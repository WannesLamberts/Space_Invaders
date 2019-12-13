//
// Created by student on 11.12.19.
//

#include "EntityView.h"

sf::Drawable* EntityView::getShape() const { return shape; }

void EntityView::setShape(sf::Drawable* shape) { EntityView::shape = shape; }
