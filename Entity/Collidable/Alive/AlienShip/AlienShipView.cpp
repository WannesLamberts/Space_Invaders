//
// Created by wannes on 22.12.19.
//

#include "AlienShipView.h"
Entity::AlienShipView::AlienShipView(const std::__shared_ptr<sf::RenderWindow>& w) : EntityView(w) {
        generateShape();
}
void Entity::AlienShipView::generateShape() {
        texture.loadFromFile("../Sprites/red.jpg");
        shape.setTexture(texture);
}
