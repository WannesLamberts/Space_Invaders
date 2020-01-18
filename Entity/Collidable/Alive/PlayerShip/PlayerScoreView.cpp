//
// Created by wannes on 16.01.20.
//

#include "PlayerScoreView.h"
Entity::PlayerScoreView::PlayerScoreView(const std::__shared_ptr<sf::RenderWindow>& w,
                                         std::weak_ptr<ModelAbstract> model)
    : EntityView(w, model)
{
        generateShape();
}
void Entity::PlayerScoreView::generateShape() {
        if (!font.loadFromFile("../Fonts/pixel.ttf"))
        {
        }
        shape=std::make_shared<sf::Text>("",font);
        Utils::Vector2D position=Utils::Transformation::getInstance().transAndCenter(Utils::Vector2D(0.5,-2.5),Utils::Vector2D(w->getSize().x,w->getSize().y),Utils::Vector2D(1,1));
        std::dynamic_pointer_cast<sf::Text>(shape)->setPosition(position.x,position.y);
}
void Entity::PlayerScoreView::update() {   std::shared_ptr<PlayerShipModel> mod= std::dynamic_pointer_cast<PlayerShipModel>(model.lock());
        std::dynamic_pointer_cast<sf::Text>(shape)->setString(std::to_string(mod->getScore())); }
