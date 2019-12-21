//
// Created by student on 11.12.19.
//
#include "Entity/Alive/PlayerShip/PlayerShipController.h"
#include "Entity/Alive/PlayerShip/PlayerShipModel.h"
#include "Entity/Alive/PlayerShip/PlayerShipView.h"
#include "Utils/StopWatch.h"
#include "Utils/Transformation.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <memory>
void drawviews(std::shared_ptr<sf::RenderWindow> w, std::vector<std::shared_ptr<ViewAbstract>>& f)
{
        for (int i = 0; i < f.size(); i++) {
                f[i]->draw(w);
        }
}

int main()
{
        std::vector<std::shared_ptr<ViewAbstract>> f;
        std::shared_ptr<Entity::PlayerShipModel> m=std::make_shared<Entity::PlayerShipModel>(Utils::Vector2D(0,0),100);
        m->setSize(Utils::Vector2D(7,5));
        std::shared_ptr<sf::RenderWindow> window=std::make_shared<sf::RenderWindow>(sf::VideoMode(800, 600), "SpaceInvaders");
        std::shared_ptr<Entity::PlayerShipView> v=std::make_shared<Entity::PlayerShipView>(window);
        m->registerObserver(v);
        f.push_back(v);
        Entity::PlayerShipController p(m, v);
        Utils::StopWatch::getInstance().start();
        while (window->isOpen()) {
                sf::Event event;
                while (window->pollEvent(event)) {
                        if (event.type == sf::Event::Closed)
                                window->close();
                }
                window->clear();
                if (Utils::StopWatch::getInstance().elapsed() > 0.01666666666) {
                        p.tick();
                        drawviews(window, f);
                        window->display();
                        Utils::StopWatch::getInstance().start();
                }
        }
        return 0;
}