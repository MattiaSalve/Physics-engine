#include "objects.h"
#include <cmath>

myObject gravity(myObject obj, float dt) {
  obj.acceleration[1] = 0.1;
  obj.position[1] = obj.initial_position[1] + obj.initial_velocity[1] * dt +
                    obj.acceleration[1] * 0.5 * pow(dt, 2);
  obj.velocity[1] = obj.initial_velocity[1] + obj.acceleration[1] * dt;
  return obj;
}
