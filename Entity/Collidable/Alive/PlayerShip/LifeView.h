//
// Created by wannes on 16.01.20.
//

#ifndef SPACE_INVADERS_LIFEVIEW_H
#define SPACE_INVADERS_LIFEVIEW_H
#include "../../../EntityView.h"
#include "PlayerShipModel.h"
namespace Entity {

/**
 * \brief used to display the life of a playerShip
 */
class LifeView : public Entity::EntityView
{
public:
        /**
         * \brief constructor for lifeView
         * @param w
         * @param model
         */
        LifeView(const std::__shared_ptr<sf::RenderWindow>& w, std::weak_ptr<ModelAbstract> model);
        /**
         * \brief generates the text that displays the life of a playershipmodel
         */
        void generateShape();
        /**
         * \brief sets the text to the current life of the playershipmodel
         */
        void update();
        /**
         * \brief the font of the text
         */
        sf::Font font;
};
} // namespace Entity
#endif // SPACE_INVADERS_LIFEVIEW_H
