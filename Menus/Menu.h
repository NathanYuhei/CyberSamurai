#include "../Includes/stdafx.h"
#include "../Botao/Botao.h"

class Menu
{
protected:
	vector<Button*> ButtonVector;
	vector<Button*>::iterator iB;

	int sel;
	int min, max;
	bool active;

	sf::Sprite* background;

public:

	Menu();
	~Menu();

	virtual void exec() = 0;

	//void updateScreen();

	void Up();
	void Down();
	


};