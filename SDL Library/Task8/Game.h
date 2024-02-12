//Game.h
#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "TextureManager.h"

using namespace std;

class Game {
public:
    Game();
    ~Game();
    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    void render();
    void update();
    void handleEvents();
    void clean();
    bool isRunning( );
    static int globalFrame;
    static int offsetGlobalFrame;
private:
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;
    bool running;

    int currentFrame;
    int currentRow;
};