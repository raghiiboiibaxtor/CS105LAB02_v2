// CS105LAB02_V1.cpp : This file contains the 'Player.h' class definition. 
// This file is the header file of the base class Player, which will be used by other objects created in seperate files.
// The base class Player, will be used to initialise the main construction of Players within the game Dungeon and Dragons. 
// The derived classes of Player, will be used to initialise new member variables and override certain Player functions. 
// This code is entirely open source, and is free to use for learning or personal use.
// Created by Raghiiboii Baxtor.

// Including header guards.
#ifndef Player_H
#define Player_H
// Including "Race.h" granting access to Race.

#include <iostream>
#include <string>

using namespace std;
const enum class Race { Human = 1, Elf = 2, Dwarf = 3, Orc = 4, Troll = 5};
class Player
{
protected: // Protecting member variables so that they may be used but not changed.
	string name;
	Race race;
	int hitpoints;
	int magicpoints;

public: // Public member functions will be accessible to derived classes.
	Player(string name, Race race, int hitpoints, int magicpoints);
	// Declaring getters:
	string getName();
	Race getRace();
	string whatRace() const;
	int getHitPoints();
	int getMagicPoints();
	//Declaring setters:
	void setName(string name);
	void setRace(Race race);
	void setHitPoints(int hitpoints);
	void setMagicPoints(int magicpoints);
	string attack(); // This function will be overridden in the derived classes.
};

#endif 





