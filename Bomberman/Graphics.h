// I denna header ska funktioner f�r att hantera grafik finnas
// Bland annat "Graphics()" contructor och deconstructor 
// En intialiserings funktion, (skapa window som grafiken ritas till)
// "BeginDraw()" f�r att b�rja rita grafiken till window, den ska ta "renderTarget" som variabel 
// "EndDraw()" f�r att avsluta

#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL_render.h>
#include <SDL.h>

int Graphics(SDL_Window *window, SDL_Renderer *renderer);

SDL_Window * InitWindow(int w, int h, char *title);

SDL_Renderer * InitRenderer(SDL_Window *window);

#endif // GRAPHICS_H