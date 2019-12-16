//
// Created by student on 11.12.19.
//

#include "EnemyShipView.h"

void Entity::EnemyShipView::draw(sf::RenderWindow& w) { w.draw(shape); }

Entity::EnemyShipView::EnemyShipView() {}
void Entity::EnemyShipView::generateShape()
{
        /*sf::VertexArray quad = sf::VertexArray(sf::Quads, 4);
        quad[0].color = sf::Color::Red;
        quad[1].color = sf::Color::Red;
        quad[2].color = sf::Color::Red;
        quad[3].color = sf::Color::Red;
        setShape(quad);*/
}
