//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETMODEL_H
#define SPACE_INVADERS_BULLETMODEL_H
#include "../../EntityModel.h"
namespace Entity{
class BulletModel :public EntityModel
{
private:
        double speed;

public:
        bool travel();
        BulletModel(const Utils::Vector2D& position, const Utils::Vector2D& size, double speed);
};
}
#endif // SPACE_INVADERS_BULLETMODEL_H
