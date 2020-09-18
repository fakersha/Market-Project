#include "graphic.h"



void graphic::AddImage(const char* Image)
{
	SDL_Window* window = SDL_CreateWindow("hello sdl window",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_ALLOW_HIGHDPI);
	    windowsurf = SDL_GetWindowSurface(window);
		imagesurface = SDL_LoadBMP(Image);
		SDL_BlitSurface(imagesurface, NULL, windowsurf, NULL);
		if (imagesurface == NULL)
		{
			cout << SDL_GetError() << endl;
		}
		
		
		
		
		SDL_UpdateWindowSurface(window);
		
}

graphic::graphic(SDL_Surface* windowsurface)
{
	windowsurf = windowsurface;
}

graphic::~graphic()
{
	SDL_FreeSurface(windowsurf);
	SDL_FreeSurface(imagesurface);
}
