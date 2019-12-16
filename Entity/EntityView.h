//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENTITYVIEW_H
#define SPACE_INVADERS_ENTITYVIEW_H

#include "../MVCAbstract/ViewAbstract.h"
#include "../Utils/Transformation.h"

namespace Entity {
/**
 * \brief View class for Entity this class handles the visual aspect of the game
 */
    class EntityView : public ViewAbstract {
    protected:
        /**
         * \brief the sf::Drawable that will be drawn on the window of the game
         */
        sf::Sprite shape;
        sf::Texture texture;
        double size;
    public:

        /**
         * \brief draws the shape on the sf::RenderWindow w
         * @param w the window where the shape gets drawn on.
         */
        virtual void draw(sf::RenderWindow &w) = 0;

        void update(double, double);

        virtual void generateShape() = 0;

    };
}

#endif // SPACE_INVADERS_ENTITYVIEW_H
