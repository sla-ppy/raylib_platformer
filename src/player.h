#ifndef PLAYER_H
#define PLAYER_H

struct Player {
public:
    int pos_x {};
    int pos_y {};

    // NOTE: Textures MUST be loaded after Window initialization (OpenGL context is required)
    Texture2D texture = LoadTexture("../assets/player_v1.png");

    void inputCheck();

    Player();
    ~Player();
};

#endif // PLAYER_H
