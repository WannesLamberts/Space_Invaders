//
// Created by student on 11.12.19.
//
#include "Entity/PlayerShip/PlayerShipView.h"
#include "Entity/EnemyShip/EnemyShipView.h"
#include <SFML/Graphics.hpp>
#include <vector>
void drawviews(sf::RenderWindow& w,std::vector<ViewAbstract*>& f){
    for (int i = 0; i < f.size(); i++) {
        f[i]->draw(w);
    }
}
int main()
{
    PlayerShipView v;
    EnemyShipView e;
    std::vector<ViewAbstract*> f;
    f.push_back(&v);
    f.push_back(&e);
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        drawviews(window,f);
        window.display();
    }

    return 0;
}