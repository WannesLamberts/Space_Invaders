//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_BULLETMODEL_H
#define SPACE_INVADERS_BULLETMODEL_H
#include "../../../MVCAbstract/ControllerAbstract.h"
#include "../../EntityModel.h"
namespace Entity{
class BulletModel :public EntityModel
{
private:
        double speed;
        bool friendly;
        std::shared_ptr<ControllerAbstract> owner;

public:
        bool travel();
        BulletModel(const Utils::Vector2D& position, const Utils::Vector2D& size, double speed, bool friendly,std::shared_ptr<ControllerAbstract> owner);
        const std::shared_ptr<ControllerAbstract>& getOwner() const;
        void setOwner(const std::shared_ptr<ControllerAbstract>& owner);
        bool isFriendly() const;
};
}
#endif // SPACE_INVADERS_BULLETMODEL_H
