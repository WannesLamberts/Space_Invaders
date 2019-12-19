//
// Created by student on 11.12.19.
//

#include "PlayerShipView.h"
#include <iostream>
void Entity::PlayerShipView::draw(std::shared_ptr<sf::RenderWindow> w) { w->draw(shape); }
void Entity::PlayerShipView::generateShape()
{
        texture.loadFromFile("../Sprites/player.png");
        sf::Sprite player;
        shape.setTexture(texture);
        //shape.setScale(0.1,0.1);
}

Entity::PlayerShipView::PlayerShipView(const std::__shared_ptr<sf::RenderWindow> &w) : EntityView(w) {
        generateShape();
}
