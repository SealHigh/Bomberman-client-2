
#include "Graphics.h"
#include <SDL.h>
#include "Level1.h"
#include "LevelManager.h"
#include <stdio.h>


//Main loop, kallar p� alla andra funktioner, f�rs�k att ha s� lite i denna som m�jligt allt ska vara enkelt att �ndra inget h�rd kodat


int main(int argc, char **argv)
{
	SDL_Window *window;

	window = InitWindow(400,400,"hej");

	//Graphics();
	SDL_Renderer *renderer;

	renderer = InitRenderer(window);

	Graphics(window, renderer);

	// Init alla funktioner

	// n�got i denna stil
	// loop n�r spelet inte �r slut
	// get input
	// update
	// draw to buffer
	// draw buffer to screen

}