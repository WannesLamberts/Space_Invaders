//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETMODEL_H
#define SPACE_INVADERS_BULLETMODEL_H
#include "../EntityModel.h"
namespace Entity{
class BulletModel :public EntityModel
{
private:
        double speed;

public:
        void travel();
};
}
#endif // SPACE_INVADERS_BULLETMODEL_H
