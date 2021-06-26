#include "raylib.h"

#include "player.h"
#include "vector_math.h"

Player::Player() {
    pos.x = GetScreenWidth() / 2;
    pos.y = GetScreenHeight() / 2;
}

void Player::inputCheck() {

    // Vector2 normDir = normalized(direction);
    // Vector2 velocity{};
    // velocity.x = normDir.x * speed;
    // velocity.y = normDir.y * speed;
    // pos.y += velocity.y * speed;

    if (IsKeyDown(KEY_UP)) {
        pos.y -= 5;
    }
    if (IsKeyDown(KEY_DOWN)) {
        pos.y += 5;
    }
    if (IsKeyDown(KEY_LEFT)) {
        pos.x -= 5;
    }
    if (IsKeyDown(KEY_RIGHT)) {
        pos.x += 5;
    }
}

Player::~Player() {
    UnloadTexture(texture); // Texture unloading
}