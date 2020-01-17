//
// Created by wannes on 21.12.19.
//

#ifndef SPACE_INVADERS_GAME_H
#define SPACE_INVADERS_GAME_H
#include <vector>
#include "MVCAbstract/ControllerAbstract.h"
#include <memory>
#include "Utils/Object.h"
#include "json-develop/single_include/nlohmann/json.hpp"
#include <stdlib.h>
#include <time.h>
#include <fstream>


class Game
{
public:
        Game();
        void drawGame();
        void runGame();
        void loadLevel(std::string file);
private:

public:
private:
        std::shared_ptr<sf::RenderWindow> w;

public:
        const std::shared_ptr<sf::RenderWindow>& getW() const;
};

#endif // SPACE_INVADERS_GAME_H
