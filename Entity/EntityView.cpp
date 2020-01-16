//
// Created by student on 11.12.19.
//

#include "EntityView.h"
#include <iostream>

void Entity::EntityView::update()
{
        Utils::Vector2D v = Utils::Vector2D(Utils::Transformation::getInstance().transAndCenter(
            std::dynamic_pointer_cast<EntityModel>(model)->getPosition(),
            Utils::Vector2D(w->getSize().x, w->getSize().y), std::dynamic_pointer_cast<EntityModel>(model)->getSize()));
        if (std::dynamic_pointer_cast<sf::Sprite>(shape)) {
                std::dynamic_pointer_cast<sf::Sprite>(shape)->setPosition(v.x, v.y);
        } else if (std::dynamic_pointer_cast<sf::Text>(shape)) {
                std::dynamic_pointer_cast<sf::Text>(shape)->setPosition(v.x, v.y);
        }
}

Entity::EntityView::EntityView(const std::__shared_ptr<sf::RenderWindow>& w, std::shared_ptr<ModelAbstract> model)
    : ViewAbstract(w, model)
{
}
void Entity::EntityView::changeScale(Utils::Vector2D cor)
{
        if (std::dynamic_pointer_cast<sf::Sprite>(shape)) {
                Utils::Vector2D v = Utils::Transformation::getInstance().reScaleHitbox(
                    cor, Utils::Vector2D(w->getSize().x, w->getSize().y),
                    Utils::Vector2D(std::dynamic_pointer_cast<sf::Sprite>(shape)->getTexture()->getSize().x,
                                    std::dynamic_pointer_cast<sf::Sprite>(shape)->getTexture()->getSize().y));
                std::dynamic_pointer_cast<sf::Sprite>(shape)->setScale(v.x, v.y);
        }
}
void Entity::EntityView::draw(std::shared_ptr<sf::RenderWindow> w) { w->draw(*shape); }
