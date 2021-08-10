#ifndef Mage_h
#define Mage_h

#include "Player.h"
#include <string>

class Mage : public Player
{

public:
	Mage(string name, Race race, int hitpoints, int magicpoints); // Default Construtor
	string attack();
};

#endif