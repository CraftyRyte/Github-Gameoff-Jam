#include "drawing.h"

void DrawingExploreState(GameObject& player){
    if (IsKeyDown(KEY_W)){
        player.SetMoveUp();
        player.Move();
    }
    if (IsKeyDown(KEY_S)){
        player.SetMoveDown();
        player.Move();
    }
   

    BeginDrawing();
    ClearBackground(BLACK);

    player.Update();

    DrawFPS(10, 10);
    EndDrawing();
}

