//
// Created by wannes on 16.01.20.
//

#include "LifeView.h"
#include <iostream>
Entity::LifeView::LifeView(const std::__shared_ptr<sf::RenderWindow>& w,std::shared_ptr<ModelAbstract> model) : EntityView(w,model) {
       generateShape();
}
void Entity::LifeView::generateShape() {
        if (!font.loadFromFile("../Fonts/pixel.ttf"))
        {
        }
        shape=std::make_shared<sf::Text>("",font);
}
void Entity::LifeView::update() {
       std::shared_ptr<PlayerShipModel> mod= std::dynamic_pointer_cast<PlayerShipModel>(model);
        std::dynamic_pointer_cast<sf::Text>(shape)->setString(std::to_string(mod->getHealthpoints()));

}
