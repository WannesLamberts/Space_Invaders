//
// Created by student on 11.12.19.
//

#include "EntityView.h"
#include <iostream>

void Entity::EntityView::update(double x, double y) {
        shape.setPosition(Utils::Transformation::getInstance().transX(x,w->getSize().x),Utils::Transformation::getInstance().transY(y,w->getSize().y));
}

Entity::EntityView::EntityView(const std::__shared_ptr<sf::RenderWindow> &w) : ViewAbstract(w) {

}
const sf::Sprite& Entity::EntityView::getShape() const { return shape; }
void Entity::EntityView::changeScale(double x, double y) {
        shape.setScale((((float)w->getSize().x/8)/shape.getTexture()->getSize().x)*x,(((float)w->getSize().y/6)/shape.getTexture()->getSize().y)*y);
}
