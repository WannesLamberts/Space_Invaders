//
// Created by student on 11.12.19.
//

#include "PlayerShipView.h"


void PlayerShipView::draw(sf::RenderWindow &w) {
    sf::VertexArray triangle(sf::Triangles, 3);
    triangle[0].position = sf::Vector2f(10, 10);
    triangle[1].position = sf::Vector2f(100, 10);
    triangle[2].position = sf::Vector2f(100, 100);
    triangle[0].color = sf::Color::Red;
    triangle[1].color = sf::Color::Blue;
    triangle[2].color = sf::Color::Green;
    w.draw(triangle);
}
