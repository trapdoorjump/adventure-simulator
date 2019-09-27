#include <SDL.h>
#include "SDL_opengl.h"

int main(int argc, char* args[]){

    SDL_Init(SDL_INIT_EVERYTHING);

    glDisable(GL_BLEND);

    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

    SDL_Window *screen = SDL_CreateWindow("My first SDL game",
                          SDL_WINDOWPOS_UNDEFINED,
                          SDL_WINDOWPOS_UNDEFINED,
                          600, 400,
                          SDL_WINDOW_OPENGL);

    glClearColor(1,1,1,1);
    glViewport(0,0,600,400);
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glDisable(GL_DEPTH_TEST);

    SDL_GL_SwapWindow(NULL);

    glClear(GL_COLOR_BUFFER_BIT);

    SDL_Delay(5000);

    SDL_Quit();

    return 0;
}
