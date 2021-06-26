#include "raylib.h"

#include "game.h"
#include "player.h"



Game::Game() {
    // INIT:
    const int SCREEN_WIDTH { 800 };
    const int SCREEN_HEIGHT { 600 };
    const char* GAME_TITLE { "raylib_platformer" };

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_TITLE);

    // Set our game to run at 60 fps
    SetTargetFPS(60);
}

void Game::update() {
    Player player;

    // UPDATE:
    while (!WindowShouldClose()) { // Detect window close button or ESC key

        // INPUT:
        player.inputCheck();

        // RENDER:
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        DrawFPS(5, 0);
        DrawTexture(player.texture, (player.pos.x), (player.pos.y), RAYWHITE);

        EndDrawing();
    }
}

Game::~Game() {
    // DEINIT:
    CloseWindow(); // Close window and OpenGL context
}