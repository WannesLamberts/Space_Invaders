//
// Created by student on 11.12.19.
//

#include "PlayerShipView.h"
#include "../../../../Utils/Transformation.h"
#include <iostream>
void Entity::PlayerShipView::generateShape()
{
        shape = std::make_shared<sf::Sprite>();
        texture.loadFromFile("../Files/Sprites/player.png");
        std::dynamic_pointer_cast<sf::Sprite>(shape)->setTexture(texture);
}

Entity::PlayerShipView::PlayerShipView(const std::__shared_ptr<sf::RenderWindow>& w, std::weak_ptr<ModelAbstract> model)
    : EntityView(w, model)
{
        generateShape();
}
