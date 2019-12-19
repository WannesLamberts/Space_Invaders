//
// Created by student on 11.12.19.
//

#include "EntityView.h"
#include <iostream>

void Entity::EntityView::update(double x, double y) {
        std::cout<<"test"<<std::endl;
        std::cout<<w->getSize().y<<std::endl;
        shape.setPosition(Utils::Transformation::getInstance().transX(x,w->getSize().x),Utils::Transformation::getInstance().transY(y,w->getSize().y));
}

Entity::EntityView::EntityView(const std::__shared_ptr<sf::RenderWindow> &w) : ViewAbstract(w) {}
