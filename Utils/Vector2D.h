//
// Created by wannes on 20.12.19.
//

#ifndef SPACE_INVADERS_VECTOR2D_H
#define SPACE_INVADERS_VECTOR2D_H
namespace Utils {

/**
 * \brief a 2Dvector that has an x and y value
 */
struct Vector2D
{
        /**
         * \brief the xValue of the vector
         */
        double x;
        /**
         * \brief the yValue of the vector
         */
        double y;
        /**
         * \brief contructor for Vector2D initialises x and y
         * @param x the xValue that x needs to be set on
         * @param y the yValue that y needs to be set on
         */
        Vector2D(double x, double y) : x(x), y(y) {}
        /**
         * \brief contructor for Vector2D that initialises nothing
         */
        Vector2D(){};
};
} // namespace Utils
#endif // SPACE_INVADERS_VECTOR2D_H
