#include "raylib.h"

#include "player.h"

Player::Player() {
    pos_x = GetScreenWidth() / 2;
    pos_y = GetScreenHeight() / 2;
}

void Player::inputCheck() {
    if (IsKeyDown(KEY_UP)) {
        DrawTexture(texture, pos_x, pos_y -= 25, RAYWHITE);
    }
    if (IsKeyDown(KEY_DOWN)) {
        DrawTexture(texture, pos_x, pos_y += 25, RAYWHITE);
    }
    if (IsKeyDown(KEY_LEFT)) {
        DrawTexture(texture, pos_x -= 25, pos_y, RAYWHITE);
    }
    if (IsKeyDown(KEY_RIGHT)) {
        DrawTexture(texture, pos_x += 25, pos_y, RAYWHITE);
    }
}

Player::~Player() {
    UnloadTexture(texture); // Texture unloading
}