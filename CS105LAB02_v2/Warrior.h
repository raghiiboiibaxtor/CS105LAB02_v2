#ifndef Warrior_h
#define Warrior_h

#include "Player.h"
#include <iostream>
#include <string>

class Warrior : public Player
{

public:
	Warrior(string name, Race race, int hitpoints, int magicpoints); // Default Construtor
	string attack();
};

#endif





