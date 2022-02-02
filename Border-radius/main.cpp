#include <SDL2/SDL.h>
#include <stdio.h>

const int height = 480;
const int width = 640;

int main() {

  SDL_Window *win = NULL;

  SDL_Surface *ss = NULL;
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
  } else {
    // Create window
    win = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED,
                           SDL_WINDOWPOS_UNDEFINED, width, height,
                           SDL_WINDOW_SHOWN);
    if (win == NULL) {
      printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
    } else {
      // Get window surface
      ss = SDL_GetWindowSurface(win);

      // Fill the surface white
      SDL_FillRect(ss, NULL,
                   SDL_MapRGB(ss->format, 0xFF, 0xFF, 0xFF));

      // Update the surface
      SDL_UpdateWindowSurface(win);

      // Wait two seconds
      SDL_Delay(2000);
    }
  }
}
