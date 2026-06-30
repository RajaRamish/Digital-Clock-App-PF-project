//#include <SFML/Graphics.hpp>
//#include <cstdlib>
//#include <ctime>
//#include <vector>
//
//#include "Particle.h"
//#include "Firework.h"
//
//#define PARTICLES_SIZE 20
//
//int main()
//{
//    sf::RenderWindow window(sf::VideoMode(1000, 600), "Fireworks!", sf::Style::Default);
//    window.setFramerateLimit(60);
//    std::srand(std::time(NULL));
//
//    std::vector<Firework> fireworks;
//
//    while (window.isOpen())
//    {
//        sf::Event evnt;
//        while (window.pollEvent(evnt))
//        {
//            switch (evnt.type)
//            {
//            case sf::Event::Closed:
//                window.close();
//                break;
//            }
//        }
//
//        window.clear();
//
//        if (fireworks.size() < 5)
//            fireworks.push_back(Firework(window));
//
//        for (auto& x : fireworks)
//            x.update(window);
//
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
//            window.close();
//
//        window.display();
//    }
//    return 0;
//}
// 