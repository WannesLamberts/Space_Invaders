//
// Created by wannes on 21.12.19.
//

#include "Game.h"
#include "Utils/ObjectManager.h"
#include "Utils/StopWatch.h"

const std::shared_ptr<sf::RenderWindow>& Game::getW() const { return w; }

Game::Game() {
        Utils::ObjectManager::getInstance().setup(this);
        w=std::make_shared<sf::RenderWindow>(sf::VideoMode(900, 600), "SpaceInvaders");
        Utils::ObjectManager::getInstance().createPlayerShip(Utils::Vector2D(0,2),Utils::Vector2D(1,1),100,0.1);
        Utils::ObjectManager::getInstance().createAlienShip(Utils::Vector2D(0,-2),Utils::Vector2D(1,1),100,0.1);
        Utils::ObjectManager::getInstance().createAlienShip(Utils::Vector2D(0,-1),Utils::Vector2D(1,1),100,0.1);
}
void Game::drawGame() {
        for (int i = 0; i <Utils::ObjectManager::getInstance().getO().size() ; ++i) {
                Utils::ObjectManager::getInstance().getO()[i]->v->draw(w);
        }
}
void Game::runGame() {
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
