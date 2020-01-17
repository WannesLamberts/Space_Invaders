//
// Created by wannes on 16.01.20.
//

#ifndef SPACE_INVADERS_PLAYERSCOREVIEW_H
#define SPACE_INVADERS_PLAYERSCOREVIEW_H

#include "../../../EntityView.h"
#include "PlayerShipModel.h"
namespace Entity{


class PlayerScoreView : public Entity::EntityView
{
public:
        PlayerScoreView(const std::__shared_ptr<sf::RenderWindow>& w,std::shared_ptr<ModelAbstract> model);
        void generateShape();
        void update();
        sf::Font font;

};
}
#endif // SPACE_INVADERS_PLAYERSCOREVIEW_H
