//D�p om till LevelManager kanske

//GameController hanterar levels och bytet av levels

//Init() -> s�tter loading till true och currentLevel

//LoadInitialLevel()-> starta currentLevel fr�n Init()

//SwitchLevel()-> n�r currentLevel �ndras byt lvl

// Render() -> om inte loading, skicka currentLevel till render

// Update() -> om inte loading, skicka currentLevel till update

#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

#include "GameLevel.h"
#include "level/levels/Level1.h"
#include "level/levels/level2.h"
#include <SDL_video.h>
#include <SDL_render.h>

int LevelInit(SDL_Renderer *renderer);

void LevelManage(SDL_Renderer *renderer,int levelSelect);

#endif //GAME_CONTROLLER_H