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
#include <Level1.h>

int LevelInit(int level);

#endif //GAME_CONTROLLER_H