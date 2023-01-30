#include <SDL2/SDL.h>
#include <game.h>
#include <iostream>

//Constructions > Destructions
game::game()
{

}

game::~game()
{

}

void game::initializeVar()
{

}

void game::intWindow (const char *title, int xpos, int ypos, int windth, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0);
    {
        SDL_CreateWindow(title, xpos, ypos, windth, height, fullscreen);
        {
            if (SDL_CreateWindow)
        }
    }
}

//public functions
void game::update()
{

}

void game::render()
{

}
