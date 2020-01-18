//
// Created by wannes on 21.12.19.
//

#include "Game.h"
#include "Utils/ObjectManager.h"
#include "Utils/StopWatch.h"
#include <iostream>

const std::shared_ptr<sf::RenderWindow>& Game::getW() const { return w; }

Game::Game(std::string file)
{
        setupgame(file);

}
void Game::drawGame()
{
        for (int j = 0; j < Utils::ObjectManager::getInstance().getVisuals().size(); ++j) {
                Utils::ObjectManager::getInstance().getVisuals()[j]->draw();
        }
        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                Utils::ObjectManager::getInstance().getO()[i]->v->draw();
        }
}
void Game::runGame()
{
        sf::Sprite gameover=generateOver();
        Utils::StopWatch::getInstance().start();
        while (w->isOpen()) {
                sf::Event event;
                while (w->pollEvent(event)) {
                        if (event.type == sf::Event::Closed)
                                w->close();
                }
                w->clear();
                drawGame();
                if(end){
                        w->draw(gameover);
                }
                w->display();
                if (Utils::StopWatch::getInstance().elapsed() > 0.01666666666 && !end) {
                        for (int i = 0; i < Utils::ObjectManager::getInstance().getO().size(); ++i) {
                                Utils::ObjectManager::getInstance().getO()[i]->c->tick();
                        }
                        Utils::ObjectManager::getInstance().deleteObjects();

                        Utils::StopWatch::getInstance().start();
                        if (Utils::ObjectManager::getInstance().getEnemycount() == 0) {
                                nextlevel();
                        }

                }
        }
}
void Game::loadLevel(std::string file)
{
        std::ifstream i(file);
        nlohmann::json j;
        i >> j;
        double speed = j["alienspeed"];
        for (int k = 0; k < j["aliens"].size(); ++k) {
                double healthpoints = j["aliens"][k]["healthpoints"];
                Utils::Vector2D position =
                    Utils::Vector2D(j["aliens"][k]["position"]["x"], j["aliens"][k]["position"]["y"]);
                Utils::Vector2D size = Utils::Vector2D(j["aliens"][k]["size"]["x"], j["aliens"][k]["size"]["y"]);
                Utils::ObjectManager::getInstance().createAlienShip(position, size, healthpoints, speed);
        }
}
void Game::nextlevel()
{
        if (currentlevel < levels.size()) {
                loadLevel(levels[currentlevel]);
                currentlevel++;
        } else {
                end = true;
        }
}
void Game::setupgame(std::string file) {
        end = false;
        std::ifstream i(file);
        nlohmann::json j;
        i >> j;
        for (int k = 0; k < j["levels"].size(); ++k) {
                std::string levelname = j["levels"][k]["name"];
                levels.push_back(levelname);
        }
        srand(time(NULL));
        Utils::ObjectManager::getInstance().setup(this);
        w = std::make_shared<sf::RenderWindow>(sf::VideoMode(900, 600), "SpaceInvaders");
        Utils::ObjectManager::getInstance().createPlayerShip(Utils::Vector2D(0, 2), Utils::Vector2D(1, 0.5), 3, 0.05);
        Utils::ObjectManager::getInstance().createShield(Utils::Vector2D(-3 ,1),Utils::Vector2D(0.7,0.7),3);
        Utils::ObjectManager::getInstance().createShield(Utils::Vector2D( -1,1),Utils::Vector2D(0.7,0.7),3);
        Utils::ObjectManager::getInstance().createShield(Utils::Vector2D( 1,1),Utils::Vector2D(0.7,0.7),3);
        Utils::ObjectManager::getInstance().createShield(Utils::Vector2D(3 ,1),Utils::Vector2D(0.7,0.7),3);
        currentlevel = 0;
        nextlevel();
}
sf::Sprite Game::generateOver() {
        sf::Sprite gameover;
        texture.loadFromFile("../Sprites/gameover.png");
        gameover.setTexture(texture);
        Utils::Vector2D hitbox = Utils::Transformation::getInstance().reScaleHitbox(
            Utils::Vector2D(8,6), Utils::Vector2D(w->getSize().x, w->getSize().y),
            Utils::Vector2D(gameover.getTexture()->getSize().x,
                            gameover.getTexture()->getSize().y));
        gameover.setScale(hitbox.x,hitbox.y);
        return gameover;
}
void Game::setEnd(bool end) { Game::end = end; }
