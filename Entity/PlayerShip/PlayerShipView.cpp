//
// Created by student on 11.12.19.
//

#include "PlayerShipView.h"
void PlayerShipView::draw(sf::RenderWindow& w) { w.draw(*getShape()); }

PlayerShipView::PlayerShipView()
{
        sf::VertexArray* quad = new sf::VertexArray(sf::Quads, 4);
        quad->operator[](0).position = sf::Vector2f(10, 10);
        quad->operator[](1).position = sf::Vector2f(110, 10);
        quad->operator[](2).position = sf::Vector2f(110, 110);
        quad->operator[](3).position = sf::Vector2f(10, 110);
        // define it as a rectangle, located at (10, 10) and with size 100x100
        // define its texture area to be a 25x50 rectangle starting at (0, 0)
        setShape(quad);
}
