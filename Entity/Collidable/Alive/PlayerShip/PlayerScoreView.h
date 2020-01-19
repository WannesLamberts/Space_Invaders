//
// Created by wannes on 16.01.20.
//

#ifndef SPACE_INVADERS_PLAYERSCOREVIEW_H
#define SPACE_INVADERS_PLAYERSCOREVIEW_H

#include "../../../EntityView.h"
#include "PlayerShipModel.h"
namespace Entity {

/**
 * \brief used to display the score of a playership
 */
class PlayerScoreView : public Entity::EntityView
{
public:
        /**
         * \brief the constructor of a playerscoreview
         * @param w
         * @param model
         */
        PlayerScoreView(const std::__shared_ptr<sf::RenderWindow>& w, std::weak_ptr<ModelAbstract> model);
        /**
         * \brief generates the text to display te score
         */
        void generateShape();
        /**
         * \brief changes the text to the currentscore of the model
         */
        void update();
        /**
         * \brief the font of the text
         */
        sf::Font font;
};
} // namespace Entity
#endif // SPACE_INVADERS_PLAYERSCOREVIEW_H
