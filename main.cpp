//
// Created by student on 11.12.19.
//
#include "Entity/EnemyShip/EnemyShipView.h"
#include "Entity/PlayerShip/PlayerShipView.h"
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
        Entity::EnemyShipView e;
        std::vector<ViewAbstract*> f;
        f.push_back(&v);
        f.push_back(&e);
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
        int getal;
        std::cin>>getal;
        return 0;
}