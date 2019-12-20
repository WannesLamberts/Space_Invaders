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
        /**
         * \brief The texture that will be drawn on te sf::sprite shape
         */
        sf::Texture texture;
    public:
        /**
         * \brief draws the shape on the sf::RenderWindow w
         * @param w the window where the shape gets drawn on.
         */
        virtual void draw(std::shared_ptr<sf::RenderWindow> w) = 0;
        void update(Utils::Vector2D);
        const sf::Sprite& getShape() const;
        void changeScale(Utils::Vector2D);
         virtual void generateShape()=0 ;

        EntityView(const std::__shared_ptr<sf::RenderWindow> &w);


    };
}

#endif // SPACE_INVADERS_ENTITYVIEW_H
