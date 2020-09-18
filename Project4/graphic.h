#pragma once
#include <SDL.h>
#include "Client.h"
class graphic
{
private:

    SDL_Surface* windowsurf = NULL;
    SDL_Surface* imagesurface = NULL;
   /* SDL_Surface* winsurface = NULL;*/
   
    const int width = 800;
    const int height = 600;
public:
    graphic() = default;
    
    void AddImage(const char* Imagename);
    graphic(SDL_Surface* windowsurface);
    ~graphic();

};