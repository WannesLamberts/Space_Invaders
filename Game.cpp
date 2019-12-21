//
// Created by wannes on 21.12.19.
//

#include "Game.h"
#include "Utils/ObjectMaker.h"
#include "Utils/StopWatch.h"

const std::shared_ptr<sf::RenderWindow>& Game::getW() const { return w; }
void Game::addObject(std::shared_ptr<Utils::Object> object) {
        o.push_back(object);
}
Game::Game() {
        Utils::ObjectMaker::getInstance().setup(this);
        w=std::make_shared<sf::RenderWindow>(sf::VideoMode(800, 600), "SpaceInvaders");
        Utils::ObjectMaker::getInstance().createPlayerShip(Utils::Vector2D(0,2),Utils::Vector2D(1,1),100);
}
void Game::drawGame() {
        for (int i = 0; i <o.size() ; ++i) {
                o[i]->v->draw(w);
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
                        for (int i = 0; i < o.size(); ++i) {
                                o[i]->c->tick();
                        }
                        drawGame();
                        w->display();
                        Utils::StopWatch::getInstance().start();
                }
        }
}
void Game::setup() {

}
