//
// Created by wannes on 21.12.19.
//

#include "Game.h"
#include "Utils/ObjectManager.h"
#include "Utils/StopWatch.h"
#include <iostream>

const std::shared_ptr<sf::RenderWindow>& Game::getW() const { return w; }

Game::Game()
{
        srand(time(NULL));
        Utils::ObjectManager::getInstance().setup(this);
        w = std::make_shared<sf::RenderWindow>(sf::VideoMode(900, 600), "SpaceInvaders");
        Utils::ObjectManager::getInstance().createPlayerShip(Utils::Vector2D(0, 2), Utils::Vector2D(1, 0.5), 3, 0.05);

}
void Game::drawGame()
{
        for (int j = 0; j < Utils::ObjectManager::getInstance().getVisuals().size(); ++j) {
                Utils::ObjectManager::getInstance().getVisuals()[j]->draw(w);
        }
        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                Utils::ObjectManager::getInstance().getO()[i]->v->draw(w);
        }
}
void Game::runGame()
{
        Utils::StopWatch::getInstance().start();
        while (w->isOpen()) {
                sf::Event event;
                while (w->pollEvent(event)) {
                        if (event.type == sf::Event::Closed)
                                w->close();
                }
                w->clear();
                if (Utils::StopWatch::getInstance().elapsed() > 0.01666666666) {
                        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                                Utils::ObjectManager::getInstance().getO()[i]->c->tick();
                        }
                        Utils::ObjectManager::getInstance().deleteObjects();
                        drawGame();
                        w->display();
                        Utils::StopWatch::getInstance().start();
                }
        }
}
void Game::loadLevel(std::string file)
{
        std::cout << file << std::endl;
        std::ifstream i(file);
        nlohmann::json j;
        i >> j;
        double speed=j["alienspeed"];
        for (int k = 0; k < j["aliens"].size(); ++k) {
                double healthpoints=j["aliens"][k]["healthpoints"];
                Utils::Vector2D position=Utils::Vector2D(j["aliens"][k]["position"]["x"],j["aliens"][k]["position"]["y"]);
                Utils::Vector2D size=Utils::Vector2D(j["aliens"][k]["size"]["x"],j["aliens"][k]["size"]["y"]);
                Utils::ObjectManager::getInstance().createAlienShip(position,size,healthpoints,speed);
        }
}
