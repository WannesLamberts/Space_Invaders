//
// Created by student on 11.12.19.
//

#include "EnemyShipView.h"
void Entity::EnemyShipView::draw(sf::RenderWindow& w) { w.draw(*getShape()); }

Entity::EnemyShipView::EnemyShipView()
{
        sf::VertexArray* quad = new sf::VertexArray(sf::Quads, 4);
        quad->operator[](0).color = sf::Color::Red;
        quad->operator[](1).color = sf::Color::Red;
        quad->operator[](2).color = sf::Color::Red;
        quad->operator[](3).color = sf::Color::Red;
        setShape(quad);
}
