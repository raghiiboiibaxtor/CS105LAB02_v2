#include "Priest.h"
#include <string>

Priest::Priest(string name, Race race, int hitpoints, int magicpoints) : Player(name, race, hitpoints, magicpoints)
{
}

string Priest::attack()
{
	return " I will assault you with my Holy Wrath!";
}
