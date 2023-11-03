#include "gameobject.h"

GameObject::GameObject(Vector2 pos, Vector2 velocity, int width, int height, Color color) {
    this->position = pos;
    this->velocity = velocity;
    this->ogVel = velocity;
    this->type = "rect";
    this->dimension[0] = width;
    this->dimension[1] = height;
    this->color = color;
    this->objectRect = Rectangle{ pos.x, pos.y, static_cast<float>(width), static_cast<float>(height) };
}
GameObject::GameObject(Vector2 pos, float radius, Vector2 velocity, Color color) {
    this->position = pos;
    this->radius = radius;
    this->velocity = velocity;
    this->type = "circle";
    this->color = color;
    this->ogVel = velocity;
}

void GameObject::ReDef() {
    if (type == "rect") {
        objectRect = Rectangle{ position.x, position.y, objectRect.width, objectRect.height };
    }
}
void GameObject::Draw() {
    if (type == "rect") {
        DrawRectangleRec(objectRect, color);
    }
    if (type == "circle") {
        DrawCircle(position.x, position.y, radius, color);
    }
}

void GameObject::Move() {
    position.x += velocity.x * GetFrameTime();
    position.y += velocity.y * GetFrameTime();
}

void GameObject::SetMoveUp() {
    ogVel = Vector2{ abs(velocity.x), abs(velocity.y) };
    velocity.y = ogVel.y * -1;
    velocity.x = 0;
}
void GameObject::SetMoveDown() {
    ogVel = Vector2{ abs(velocity.x), abs(velocity.y) };
    velocity.y = ogVel.y;
    velocity.x = 0;
}
void GameObject::SetMoveLeft() {
    ogVel = Vector2{ abs(velocity.x), abs(velocity.y) };
    velocity.x = ogVel.x * -1;
    velocity.y = 0;
}
void GameObject::SetMoveRight() {
    ogVel = Vector2{ abs(velocity.x), abs(velocity.y) };
    velocity.x = ogVel.x;
    velocity.y = 0;
}

void GameObject::Update() {
    ogVel = Vector2{ abs(velocity.x), abs(velocity.y) };
    ReDef();
    Draw();
}
