//
// Created by wannes on 22.12.19.
//

#include "AlienShipView.h"
#include <iostream>
Entity::AlienShipView::AlienShipView(const std::__shared_ptr<sf::RenderWindow>& w,std::weak_ptr<ModelAbstract> model) : EntityView(w,model) {
        generateShape();
}
void Entity::AlienShipView::generateShape() {
        shape=std::make_shared<sf::Sprite>();
        texture.loadFromFile("../Sprites/alien.png");
        std::dynamic_pointer_cast<sf::Sprite>(shape)->setTexture(texture);
}
