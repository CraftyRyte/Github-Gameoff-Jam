#include <iostream>
#include "raylib-cpp.hpp"

int main() {
    InitWindow(900, 900, "My Stuff Baby");
    SetTargetFPS(60);

    std::string game_states[4] = {"start", "menu", "explore", "fight"};
    std::string game_state = game_states[2];

    while (!WindowShouldClose()){
        if (game_state == game_states[0]) {
            BeginDrawing();
            EndDrawing();
        }
        else if (game_state == game_states[1]) {
            BeginDrawing();
            EndDrawing();
        }
        else if (game_state == game_states[2]) {
            BeginDrawing();
            ClearBackground(BLACK);
            DrawFPS(10, 10);
            EndDrawing();
        }
        else if (game_state == game_states[3]) {
            BeginDrawing();
            EndDrawing();
        }
    }
    CloseWindow();
    return 0;
}
