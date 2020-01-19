//
// Created by wannes on 14.12.19.
//

#ifndef SPACE_INVADERS_TRANSFORMATION_H
#define SPACE_INVADERS_TRANSFORMATION_H
#include "Vector2D.h"
#include <memory>
namespace Utils {
/**
 * \brief  transforms x and y values in the logic coordinates to the corresponding values on the screen.
 */
class Transformation
{
public:
        /**
         * \brief This is the only way to get a reference to the Transformation object and there can only exist 1 object
         * of Transformation;
         * @return the reference to the Transformation object
         */
        static Transformation& getInstance()
        {
                static Transformation instance; // Guaranteed to be destroyed.
                // Instantiated on first use.
                return instance;
        }
        /**
         * \brief transforms the logic coordinates to the corresponding values on the screen
         * @param logic the logic coordinates that needs to be transformed
         * @param window the window coordinates needed to calculate the transformation
         * @return the transformed Vector2D
         */
        Utils::Vector2D trans(Utils::Vector2D logic, Utils::Vector2D window);
        /**
         * \brief calculates a vector2D so that if it get's drawn it get's drawn in the center of the model and not in
         * the top left
         * @param logicPosition the position  that needs to be centered
         * @param logicSize the size of the object that needs to be centered
         * @return the centered vector2D
         */
        Utils::Vector2D center(Utils::Vector2D logicPosition, Utils::Vector2D logicSize);
        /**
         * \brief calculates a vector2D that centers the logic and then transforms it to the corresponding pixels on the
         * screen
         * @param logic the logic coordinates that needs to be transformed
         * @param window the window coordinates needed to calculate the transformation
         * @param logicSize the size of the object that needs to be centered
         * @return the centered and transformed Vector2D
         */
        Utils::Vector2D transAndCenter(Utils::Vector2D logic, Utils::Vector2D window, Utils::Vector2D logicSize);
        /**
         * \brief calulates a Vector2D that scales an image to the hitbox of an image
         * @param logicSize the size of the object that needs to be scaled
         * @param windowSize the size of the window
         * @param Texturesize the size of the Texture
         * @return the rescaledHitbox Vector2D
         */
        Utils::Vector2D reScaleHitbox(Utils::Vector2D logicSize, Utils::Vector2D windowSize,
                                      Utils::Vector2D Texturesize);

private:
        /**
         * \brief Constructor is made private so it can't be called
         */
        Transformation(){};
        /**
         * \brief Copy constructor is made private so it can't be called
         */
        Transformation(Transformation const&);
        /**
         * \brief Copy assignemmt is made private so it can't be called
         */
        Transformation& operator=(Transformation const&);
};
} // namespace Utils
#endif // SPACE_INVADERS_TRANSFORMATION_H
