//
// Created by wannes on 18.01.20.
//

#ifndef SPACE_INVADERS_ENEMYMODEL_H
#define SPACE_INVADERS_ENEMYMODEL_H
#include "../AliveModel.h"
namespace Entity{
class EnemyModel: public AliveModel
{
protected:
        bool right;

public:
        bool isRight() const;
        void setRight(bool right);
        bool moveDown();

        EnemyModel(const Utils::Vector2D& position, const Utils::Vector2D& size, int healthpoints, double speed);
};
}
#endif // SPACE_INVADERS_ENEMYMODEL_H
