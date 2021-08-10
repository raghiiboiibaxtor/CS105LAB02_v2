#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player(string name, Race race, int hitpoints, int magicpoints)
{
	this->name = name;
	this->race = race;
	this->hitpoints = hitpoints;
	this->magicpoints = magicpoints;
}

string Player::getName()
{
	return name;
}

Race Player::getRace()
{
	return race;
}

int Player::getHitPoints()
{
	return hitpoints;
}

string Player::whatRace() const//getter
{


	switch (race)
	{
	case Race::Human:
		return " I am a Human";
		break;
	case Race::Elf:
		return " I am an Elf";
		break;
	case Race::Dwarf:
		return " I am a Dwarf";
		break;
	case Race::Orc:
		return " I am an Orc";
		break;
	case Race::Troll:
		return " I am a Troll";
		break;
	default:
		return " Please select a valid option (1, 2, 3, 4) in order to play.";
		break;
	}
	cin.ignore();
}


int Player::getMagicPoints()
{
	return magicpoints;
}

void Player::setName(string name)
{
	this->name = name;
}

void Player::setRace(Race race)
{
	this->race = race;
}

void Player::setHitPoints(int hitpoints)
{
	this->hitpoints = hitpoints;
}

void Player::setMagicPoints(int magicpoints)
{
	this->magicpoints = magicpoints;
}

string Player::attack()
{
	return " No attack method defined yet!";
}


