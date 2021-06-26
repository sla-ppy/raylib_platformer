/*
* Program written by:
* Copyright © 2021, sla-ppy. All rights reserved.
*
* Library used:
* raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
* Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*/

#include <iostream>

#include "raylib.h"

int main() {

    // Init
    const int SCREEN_WIDTH { 800 };
    const int SCREEN_HEIGHT { 600 };
    const char* GAME_TITLE { "raylib_platformer" };

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_TITLE);

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
    Texture2D PLAYER_TEXTURE = LoadTexture("../assets/player_v1.png");

    // Set our game to run at 60 fps
    SetTargetFPS(60);

    // Main game loop
    while (!WindowShouldClose()) { // Detect window close button or ESC key

        int PLAYER_POS_X {};
        int PLAYER_POS_Y {};

        // DRAW:
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        DrawTexture(PLAYER_TEXTURE, (PLAYER_POS_X = SCREEN_WIDTH / 2), (PLAYER_POS_Y = SCREEN_HEIGHT / 2), RAYWHITE);

        // UPDATE:
        if (IsKeyDown(KEY_UP)) {
            DrawTexture(PLAYER_TEXTURE, PLAYER_POS_X, PLAYER_POS_Y -= 25, RAYWHITE);
        }
        if (IsKeyDown(KEY_DOWN)) {
            DrawTexture(PLAYER_TEXTURE, PLAYER_POS_X, PLAYER_POS_Y += 25, RAYWHITE);
        }
        if (IsKeyDown(KEY_LEFT)) {
            DrawTexture(PLAYER_TEXTURE, PLAYER_POS_X -= 25, PLAYER_POS_Y, RAYWHITE);
        }
        if (IsKeyDown(KEY_RIGHT)) {
            DrawTexture(PLAYER_TEXTURE, PLAYER_POS_X += 25, PLAYER_POS_Y, RAYWHITE);
        }

        EndDrawing();
    }

    // Deinit
    UnloadTexture(PLAYER_TEXTURE); // Texture unloading

    CloseWindow(); // Close window and OpenGL context

    return 0;
}
