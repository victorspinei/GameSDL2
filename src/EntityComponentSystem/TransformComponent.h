#ifndef TRANSFORMCOMPONENT_H
#define TRANSFORMCOMPONENT_H

#include "EntityComponentSystem.h"
#include "../Vector2D.h"

class TransformComponent : public Component {
public:
    Vector2D position;
    Vector2D velocity;

    float speed = 3.0f;

    TransformComponent() {
        position.x = 0.0f;
        position.y = 0.0f;
    }

    TransformComponent(float x, float y) {
        position.x = x;
        position.y = y;
    }

    void init() override {
        velocity.x = velocity.y = 0;
    }
    void update() override {
        position.x += velocity.x * speed;
        position.y += velocity.y * speed;
    }

};
#endif //TRANSFORMCOMPONENT_H
