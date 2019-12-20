//
// Created by wannes on 20.12.19.
//

#ifndef SPACE_INVADERS_VECTOR2D_H
#define SPACE_INVADERS_VECTOR2D_H
namespace Utils{


struct Vector2D
{
        double x;
        double y;
        Vector2D(double x, double y) : x(x), y(y) {}
        Vector2D(){};
};
}
#endif // SPACE_INVADERS_VECTOR2D_H
