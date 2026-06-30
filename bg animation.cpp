/*#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>

void dynamicBackgroundWithGradient() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Dynamic Gradient");
    sf::Color morning(255, 223, 186);  // Orange
    sf::Color evening(135, 206, 250); // Sky blue
    sf::Color currentColor = morning;

    while (window.isOpen()) {
        std::time_t now = std::time(nullptr);
        std::tm localTime;
        localtime_s(&localTime, &now);  // Safe version

        int hour = localTime.tm_hour;

        // Interpolate between colors
        if (hour >= 6 && hour < 18) {
            currentColor = morning;
        }
        else {
            currentColor = evening;
        }

        window.clear(currentColor);
        window.display();
    }
}

int main() {
    dynamicBackgroundWithGradient();
    return 0;
}
*/