#ifndef Priest_h
#define Priest_h
#include <string>
#include "Player.h"
class Priest : public Player
{
public:
	Priest(string name, Race race, int hitpoints, int magicpoints); // Default Construtor
	string attack();
};

#endif
