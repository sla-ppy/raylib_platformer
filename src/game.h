#ifndef GAME_H
#define GAME_H

class Game {
public:
    static void update();

    Game();
    ~Game();
    // deleting the copy constructor, type cannot be copied
    Game(const Game&) = delete;
};

#endif // GAME_H
