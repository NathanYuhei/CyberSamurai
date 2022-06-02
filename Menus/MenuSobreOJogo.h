#pragma once
#include "../Includes/stdafx.h"
#include "../States/Estado.h"
#include "Menu.h"

namespace Menus{

class Game;

class MenuSobreOJogo : public Menu, public States::State
{
private:
	sf::Text* text;

public:
	MenuSobreOJogo(States::StateControl* pSC);
	~MenuSobreOJogo();

	void render();

	void resetState();

	void exec();

	void update(float dt);
};

}