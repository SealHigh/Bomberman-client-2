//Unik f�r varje level
//H�r anv�nder man gamecontroller f�r att s�ga vilken level som �r ig�ng
//Och vi anv�nder funktionerna i gameController f�r att hantera lvln


// Load() -> start v�rden

// Unload() -> n�r lvln �r klar ta bort allt som finns s� det inte ligger i bakgrunden hela tiden

// Render() -> Definiera vad som ritas till sk�rmen, rita leveln

// Update() -> Vad som ska ske i leveln defenieras i update, ska n�got r�ra sig osv

#ifndef LEVEL1_H
#define LEVEL1_H

#include "../../GameLevel.h"

#include <SDL_render.h>



int InitLevel1(SDL_Renderer *renderer);

#endif