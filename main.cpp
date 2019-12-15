//
// Created by student on 11.12.19.
//
#include "Entity/EnemyShip/EnemyShipView.h"
#include "Entity/PlayerShip/PlayerShipView.h"
#include "Entity/PlayerShip/PlayerShipModel.h"
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
        Entity::PlayerShipView v;
        v.setSize(1);
        Entity::PlayerShipModel m(100,0,0);
        m.setObserver(&v);
        std::vector<ViewAbstract*> f;
        f.push_back(&v);
        sf::RenderWindow window(sf::VideoMode(800, 600), "SpaceInvaders");
        while (window.isOpen()) {
                sf::Event event;
                while (window.pollEvent(event)) {
                        if (event.type == sf::Event::Closed)
                                window.close();
                }
                window.clear();
                drawviews(window, f);
                window.display();
        }

        return 0;
}