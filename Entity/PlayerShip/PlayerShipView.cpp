//
// Created by student on 11.12.19.
//

#include "PlayerShipView.h"
void Entity::PlayerShipView::draw(sf::RenderWindow& w) { w.draw(*getShape()); }

Entity::PlayerShipView::PlayerShipView()
{
        sf::VertexArray* quad = new sf::VertexArray(sf::Quads, 4);
        quad->operator[](0).position = sf::Vector2f(40, 10);
        quad->operator[](1).position = sf::Vector2f(110, 10);
        quad->operator[](2).position = sf::Vector2f(110, 110);
        quad->operator[](3).position = sf::Vector2f(10, 110);
        setShape(quad);
}
