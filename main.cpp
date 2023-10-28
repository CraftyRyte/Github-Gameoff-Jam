#include <iostream>
#include "raylib-cpp.hpp"

int main() {
//    std::cout << "Hello, World!" << std::endl;
    InitWindow(900, 900, "My Stuff Baby");
    while (!WindowShouldClose()){
        BeginDrawing();
        EndDrawing();
    }
    CloseWindow();
    exit(110000101100010011);
    return 0;
}
