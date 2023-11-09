//
// Created by Craft on 11/8/2023.
//

#ifndef GITHUB_GAMEOFF_JAM_FORK_BOBBY_H
#define GITHUB_GAMEOFF_JAM_FORK_BOBBY_H
#include "drawing.h"

struct Bobby{
    static void DrawingExploreState(GameObject& player){
        if (IsKeyDown(KEY_I)){
            player.SetMoveUp();
            player.Move();
        }
        if (IsKeyDown(KEY_K)){
            player.SetMoveDown();
            player.Move();
        }

        player.Update();
    }
};

#endif //GITHUB_GAMEOFF_JAM_FORK_BOBBY_H
