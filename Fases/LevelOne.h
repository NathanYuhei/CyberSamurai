#pragma once
#include "Level.h"

class LevelOne :
    public Level
{
private:
    void initLevel();
public:
    LevelOne(States::StateControl* pSC);
    ~LevelOne();

};

