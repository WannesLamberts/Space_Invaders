//
// Created by student on 11.12.19.
//

#include "PlayerShipView.h"
#include <iostream>
void Entity::PlayerShipView::draw(sf::RenderWindow& w) { w.draw(getShape()); }

Entity::PlayerShipView::PlayerShipView() { generateShape(); }
void Entity::PlayerShipView::generateShape()
{
        sf::Texture tex;
        tex.loadFromFile("../Sprites/player.jpg");
        setTexture(tex);
        sf::Sprite player;
        player.setTexture(getTexture());
        player.setScale(0.1,0.1);
        player.setPosition(400, 300);
        setShape(player);
}
