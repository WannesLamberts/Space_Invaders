//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_PLAYERSHIPVIEW_H
#define SPACE_INVADERS_PLAYERSHIPVIEW_H

#include "../../../EntityView.h"
namespace Entity {
/**
 * \brief View class for PlayerShip this class handles the visual aspect of the game
 */
class PlayerShipView : public EntityView
{

public:
        /**
         * \brief the constructor of a playershipview
         * @param w
         * @param model
         */
        PlayerShipView(const std::__shared_ptr<sf::RenderWindow>& w, std::weak_ptr<ModelAbstract> model);

        /**
         * \brief generates the drawable for the PlayershipView
         */
        void generateShape();
        /**
         * \brief The texture that will be drawn on te sf::sprite shape
         */
        sf::Texture texture;
};
} // namespace Entity

#endif // SPACE_INVADERS_PLAYERSHIPVIEW_H
