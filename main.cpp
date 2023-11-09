//AB AN
#include <iostream>
#include "raylib-cpp.hpp"
#include "gameobject.h"
#include "player.h"



int main() {
    const int width = 900;
    const int height = 900;
    InitWindow(width, height, "Our GameJam Project");
    SetTargetFPS(60);

    // Game states and definitions
    std::string game_states[4] = {"start", "menu", "play", "end"};
    std::string game_state = game_states[2];

    // Game objects
    GameObject player = GameObject(Vector2{200, height/2}, 15, Vector2{500, 500}, RAYWHITE);
    GameObject bobby = GameObject(Vector2{700, height/2}, Vector2{500, 500}, 20, 30, GREEN);
    // Main game loop
    while (!WindowShouldClose()){
        // if game state is start
        if (game_state == game_states[0]) {
            BeginDrawing();
            EndDrawing();
        }
        // if game state is menu
        else if (game_state == game_states[1]) {
            BeginDrawing();
            EndDrawing();
        }
        // if game state is explore
        else if (game_state == game_states[2]) {
            BeginDrawing();
            ClearBackground(BLACK);
            Player::DrawingExploreState(player);
            EndDrawing();
        }
        // if game state is fight
        else if (game_state == game_states[3]) {
            BeginDrawing();
            EndDrawing();
        }
    }
    CloseWindow();
    return 0;
}
