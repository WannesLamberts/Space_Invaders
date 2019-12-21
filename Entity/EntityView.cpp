//
// Created by student on 11.12.19.
//

#include "EntityView.h"
#include <iostream>

void Entity::EntityView::update(Utils::Vector2D cor, Utils::Vector2D size)
{
        Utils::Vector2D v = Utils::Vector2D(Utils::Transformation::getInstance().transAndCenter(
            cor, Utils::Vector2D(w->getSize().x, w->getSize().y), size));
        shape.setPosition(v.x, v.y);
}

Entity::EntityView::EntityView(const std::__shared_ptr<sf::RenderWindow>& w) : ViewAbstract(w) {}
const sf::Sprite& Entity::EntityView::getShape() const { return shape; }
void Entity::EntityView::changeScale(Utils::Vector2D cor)
{

       Utils::Vector2D v= Utils::Transformation::getInstance().reScaleHitbox(
            cor, Utils::Vector2D(w->getSize().x, w->getSize().y),
            Utils::Vector2D(shape.getTexture()->getSize().x, shape.getTexture()->getSize().y));
        shape.setScale(v.x,v.y);

}
void Entity::EntityView::draw(std::shared_ptr<sf::RenderWindow> w) {
        w->draw(shape);
}
