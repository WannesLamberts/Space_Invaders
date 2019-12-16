//
// Created by student on 11.12.19.
//

#include "PlayerShipView.h"
#include <iostream>
void Entity::PlayerShipView::draw(sf::RenderWindow& w) { w.draw(shape); }

Entity::PlayerShipView::PlayerShipView() { generateShape(); }
void Entity::PlayerShipView::generateShape()
{
        texture.loadFromFile("../Sprites/player.png");
        sf::Sprite player;
        shape.setTexture(texture);
        shape.setScale(0.1,0.1);
        shape.setPosition(400, 300);
}
