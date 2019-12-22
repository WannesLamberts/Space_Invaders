//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_GAME_H
#define SPACE_INVADERS_GAME_H
#include <vector>
#include "MVCAbstract/ControllerAbstract.h"
#include <memory>
#include "Utils/Object.h"

class Game
{
public:
        Game();

        void addObject(std::shared_ptr<Utils::Object> o);
        void drawGame();
        void runGame();
        void setup();
private:
        std::vector<std::shared_ptr<Utils::Object>> o;

public:
        const std::vector<std::shared_ptr<Utils::Object>>& getO() const;
        void deleteob(int i);
private:
        std::shared_ptr<sf::RenderWindow> w;

public:
        const std::shared_ptr<sf::RenderWindow>& getW() const;
};

#endif // SPACE_INVADERS_GAME_H
