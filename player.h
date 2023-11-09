//
// Created by Craft on 11/9/2023.
//

#ifndef GITHUBGAMEOFF_PLAYER_H
#define GITHUBGAMEOFF_PLAYER_H
#include "gameobject.h"

struct Player{
    static void DrawingExploreState(GameObject& player){
        if (IsKeyDown(KEY_W)){
            player.SetMoveUp();
            player.Move();
        }
        if (IsKeyDown(KEY_S)){
            player.SetMoveDown();
            player.Move();
        }
        if (IsKeyDown(KEY_U)){
            player.radius += 2;
        }
        if (IsKeyDown(KEY_R)){
            player.radius -= 2;
        }

        player.Update();
    }

};
#endif //GITHUBGAMEOFF_PLAYER_H
