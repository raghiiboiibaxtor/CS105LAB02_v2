//
#include "Warrior.h"
#include <string>
#include <iostream>
using namespace std;

Warrior::Warrior(string name, Race race, int hitpoints, int magicpoints) : Player(name, race, hitpoints, magicpoints)
{
}

string Warrior::attack()
{
	 return " I will defeat you with my sword, foul demon!";
}

