/*#include <SFML/Graphics.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Particle {
    sf::CircleShape shape;
    sf::Vector2f velocity;
};

void fireworksAnimation() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Fireworks");
    std::vector<Particle> particles;
    std::srand(std::time(0));

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Create particles
        if (particles.size() < 100) {
            Particle p;
            p.shape.setRadius(2);
            p.shape.setFillColor(sf::Color::White);
            p.shape.setPosition(400, 300);
            p.velocity.x = (std::rand() % 20 - 10) * 0.5f;
            p.velocity.y = (std::rand() % 20 - 10) * 0.5f;
            particles.push_back(p);
        }

        // Update particles
        for (auto& p : particles) {
            p.shape.move(p.velocity);
            p.velocity.y += 0.1; // Gravity effect
        }

        // Draw particles
        window.clear();
        for (const auto& p : particles) {
            window.draw(p.shape);
        }
        window.display();

        // Remove particles that go out of bounds
        particles.erase(std::remove_if(particles.begin(), particles.end(),
            [](const Particle& p) {
                return p.shape.getPosition().y > 600;
            }),
            particles.end());
    }
}

int main() {
    fireworksAnimation();
    return 0;
}

*/