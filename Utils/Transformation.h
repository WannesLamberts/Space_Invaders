//
// Created by wannes on 14.12.19.
//

#ifndef SPACE_INVADERS_TRANSFORMATION_H
#define SPACE_INVADERS_TRANSFORMATION_H
#include "Vector2D.h"
#include <memory>
namespace Utils {
/**
 * \brief used for transforming a models x and y values to the corresponding values on the screen.
 */
class Transformation
{
public:
        /**
         * \brief This is the only way to get a reference to the Transformation object and there can only exist 1 object of Transformation;
         * @return the reference to the Transformation object
         */
        static Transformation& getInstance(){
                static Transformation    instance; // Guaranteed to be destroyed.
                // Instantiated on first use.
                return instance;
        }
        Utils::Vector2D trans(Utils::Vector2D,Utils::Vector2D);
        Utils::Vector2D transAndCenter(Utils::Vector2D,Utils::Vector2D,Utils::Vector2D);
        Utils::Vector2D center(Utils::Vector2D,Utils::Vector2D);


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
}
#endif // SPACE_INVADERS_TRANSFORMATION_H
