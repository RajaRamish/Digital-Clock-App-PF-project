/*#include <SFML/Graphics.hpp>

void dynamicBackground() {
    sf::RenderWindow window(sf::VideoMode(400, 400), "Dynamic Background");
    sf::Color backgroundColor;

    while (window.isOpen()) {
        std::time_t now = std::time(nullptr);
        std::tm* localTime = std::localtime(&now);
        int hour = localTime->tm_hour;

        if (hour >= 6 && hour < 12) backgroundColor = sf::Color::Yellow;  // Morning
        else if (hour >= 12 && hour < 18) backgroundColor = sf::Color::Blue; // Afternoon
        else if (hour >= 18 && hour < 21) backgroundColor = sf::Color::Magenta; // Evening
        else backgroundColor = sf::Color::Black; // Night

        window.clear(backgroundColor);
        window.display();
    }
}*/
