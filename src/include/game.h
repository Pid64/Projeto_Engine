#include <SDL2/SDL_image.h>
#include <SDL2/SDL_system.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_types.h>

class game
{
private:

    //private functions
    void initializeVar();
    void intWindow();

public:

    //contructions > destruction
    game();
    virtual ~game();

    //public functions
    void update();
    void render();
};
