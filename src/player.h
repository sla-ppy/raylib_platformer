#ifndef PLAYER_H
#define PLAYER_H

struct Player {
public:

    Vector2 pos{};
    Vector2 direction {};
    float speed {5};

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
    Texture2D texture = LoadTexture("../assets/png/player_v1.png");

    void inputCheck();

    Player();
    ~Player();
};

#endif // PLAYER_H
