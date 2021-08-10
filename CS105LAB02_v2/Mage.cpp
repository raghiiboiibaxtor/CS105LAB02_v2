#include "Mage.h"
#include <string>

Mage::Mage(string name, Race race, int hitpoints, int magicpoints) : Player(name, race, hitpoints, magicpoints)
{

}

string Mage::attack()
{
	return " I will crush you with the power of my arcane missiles!" ;
}

