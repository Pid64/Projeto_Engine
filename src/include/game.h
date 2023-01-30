#include <SDL2/SDL.h>

class game
{
    public:
    game();
    ~game();

    void render();
    void update();
    void clean();

    bool running();

    private:
    bool isRunning();

    void initializeVar();
    void intWindow(const char *title, int xpos, int ypos, int windth, int height, bool fullscreen);
};
