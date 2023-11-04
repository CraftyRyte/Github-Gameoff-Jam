//
// Created by Craft on 11/3/2023.
//

#ifndef GITHUBGAMEOFF_GAMEOBJECT_H
#define GITHUBGAMEOFF_GAMEOBJECT_H
#pragma once

#include "raylib-cpp.hpp"

struct GameObject {
    Vector2 position;
    std::string type;
    Vector2 velocity;
    Rectangle objectRect;
    float radius;
    int dimension[2];
    Color color;
    Vector2 ogVel;

    GameObject(Vector2 pos, Vector2 velocity, int width, int height, Color color);
    GameObject(Vector2 pos, float radius, Vector2 velocity, Color color);

    void Move();
    void SetVelocity(Vector2 newVelocity);
    void SetMoveUp();
    void SetMoveDown();
    void SetMoveLeft();
    void SetMoveRight();
    void Update();

private:
    void ReDef();
    void Draw();
};


#endif //GITHUBGAMEOFF_GAMEOBJECT_H
