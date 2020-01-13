//
// Created by student on 11.12.19.
//

#include "PlayerShipView.h"
#include "../../../../Utils/Transformation.h"
#include <iostream>
void Entity::PlayerShipView::generateShape()
{
        texture.loadFromFile("../Sprites/red.jpg");
        shape.setTexture(texture);
}

Entity::PlayerShipView::PlayerShipView(const std::__shared_ptr<sf::RenderWindow> &w) : EntityView(w) {
        generateShape();
}
