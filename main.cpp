//
// Created by student on 11.12.19.
//
#include "Entity/EnemyShip/EnemyShipView.h"
#include "Entity/PlayerShip/PlayerShipController.h"
#include "Entity/PlayerShip/PlayerShipModel.h"
#include "Entity/PlayerShip/PlayerShipView.h"
#include "Utils/StopWatch.h"
#include "Utils/Transformation.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
void drawviews(sf::RenderWindow& w, std::vector<ViewAbstract*>& f)
{
        for (int i = 0; i < f.size(); i++) {
                f[i]->draw(w);
        }
}

int main()
{
        std::vector<ViewAbstract*> f;
        Entity::PlayerShipView v;
        Entity::PlayerShipModel m(100, 0, 2);
        m.registerObserver(&v);
        Entity::PlayerShipController p(&m, &v);
        Utils::StopWatch::getInstance().start();
        f.push_back(&v);
        sf::RenderWindow window(sf::VideoMode(800, 600), "SpaceInvaders");
        while (window.isOpen()) {
                sf::Event event;
                while (window.pollEvent(event)) {
                        if (event.type == sf::Event::Closed)
                                window.close();
                }
                window.clear();
                if (Utils::StopWatch::getInstance().elapsed() > 0.01666666666) {
                        p.readInput();
                        drawviews(window, f);
                        window.display();
                        Utils::StopWatch::getInstance().start();
                }
        }
        return 0;
}