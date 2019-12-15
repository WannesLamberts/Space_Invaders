//
// Created by student on 11.12.19.
//

#include "EntityView.h"
#include <iostream>

sf::Sprite Entity::EntityView::getShape() const { return shape; }

void Entity::EntityView::setShape(sf::Sprite shape) { EntityView::shape = shape; }
void Entity::EntityView::update(double x, double y) {
        shape.setPosition(Utils::Transformation::getInstance().transX(x,800),Utils::Transformation::getInstance().transY(y,600));
}
double Entity::EntityView::getSize() const { return size; }
void Entity::EntityView::setSize(double size) { EntityView::size = size; }
const sf::Texture& Entity::EntityView::getTexture() const { return texture; }
void Entity::EntityView::setTexture(const sf::Texture& texture) { EntityView::texture = texture; }
