//
// Created by student on 11.12.19.
//

#ifndef SPACE_INVADERS_ENTITYVIEW_H
#define SPACE_INVADERS_ENTITYVIEW_H

#include "../MVCAbstract/ViewAbstract.h"
/**
 * \brief View class for Entity this class handles the visual aspect of the game
 */
class EntityView : public ViewAbstract
{
private:
        /**
         * \brief the sf::Drawable that will be drawn on the window of the game
         */
        sf::Drawable* shape;

public:
        /**
         * returns the sf::drawable of this Entity
         * @return const sf::Drawable of this Entity
         */
        sf::Drawable* getShape() const;
        /**
         * sets the shape of this Entity to the given shape
         * @param shape the new shape of this Entity
         */
        void setShape(sf::Drawable* shape);

        /**
         * \brief draws the shape on the sf::RenderWindow w
         * @param w the window where the shape gets drawn on.
         */
        virtual void draw(sf::RenderWindow& w) = 0;
};

#endif // SPACE_INVADERS_ENTITYVIEW_H
