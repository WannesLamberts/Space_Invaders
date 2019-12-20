//
// Created by student on 11.12.19.
//

#include "EntityView.h"
#include <iostream>

void Entity::EntityView::update(Utils::Vector2D cor)
{
        Utils::Vector2D v = Utils::Vector2D(
            Utils::Transformation::getInstance().trans(cor,Utils::Vector2D(w->getSize().x, w->getSize().y)));
        shape.setPosition(v.x, v.y);
}

Entity::EntityView::EntityView(const std::__shared_ptr<sf::RenderWindow>& w) : ViewAbstract(w) {}
const sf::Sprite& Entity::EntityView::getShape() const { return shape; }
void Entity::EntityView::changeScale(Utils::Vector2D cor)
{
        shape.setScale((((float)w->getSize().x / 8) / shape.getTexture()->getSize().x) * cor.x,
                       (((float)w->getSize().y / 6) / shape.getTexture()->getSize().y) * cor.y);
}
