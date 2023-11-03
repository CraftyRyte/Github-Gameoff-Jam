#include <iostream>
#include "raylib-cpp.hpp"
#include "gameobject.h"

int main() {
    InitWindow(900, 900, "My Stuff Baby");
    SetTargetFPS(60);

    // Game states and definitions
    std::string game_states[4] = {"start", "menu", "explore", "fight"};
    std::string game_state = game_states[2];
    //GameObject example = GameObject(Vector2{80, 80}, Vector2{0, 0}, 20, 100, WHITE);
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
            //example.Update();
            DrawFPS(10, 10);
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
