#include <stdio.h>
#include "SDL.h"

#define WIDTH 1280
#define HEIGHT 720


int main() {
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window* screen = SDL_CreateWindow("Space is cool", 0, 0, WIDTH, HEIGHT, 0);
    if (!screen) {
        puts("screen creation went wrong\n");
        puts(SDL_GetError());
    }

    SDL_Surface* window = SDL_GetWindowSurface(screen);
    if (!window) {
        puts(SDL_GetError());
    }

    if (SDL_UpdateWindowSurface(screen) < 0) {
        puts("Something went wrong updating the window");
        puts(SDL_GetError());
    }
    //puts("test\n");

    SDL_Event event;
    int quit = 0;
    while (!quit) {
        if (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = 1;
            }
        }

    }
    return 0;
}
