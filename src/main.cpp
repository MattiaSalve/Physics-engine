#include <SFML/Graphics.hpp>
#include <unistd.h>

#include "includes/calculations.cpp"

int main() {
  myObject obj1;
  sf::RenderWindow window(sf::VideoMode(800, 800), "Physics Simulator");
  sf::CircleShape shape(50);
  float i = 0;
  obj1.initial_position[1] = 0;
  obj1.position[0] = 300;
  obj1.initial_velocity[1] = 0;
  float mu = 0.7;

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed)
        window.close();
    }

    i += 0.1;
    usleep(1000);
    obj1 = gravity(obj1, i);
    window.clear();
    shape.setPosition(obj1.position[0], obj1.position[1]);
    if (shape.getPosition().y > 300) {
      obj1.initial_velocity[1] = -obj1.velocity[1] * mu;
      obj1.velocity[1] = 0;
      obj1.initial_position[1] = shape.getPosition().y;
      i = 0;
    }
    window.draw(shape);
    window.display();
  }
  return 0;
}
