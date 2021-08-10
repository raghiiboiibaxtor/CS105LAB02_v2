// CS105LAB02_V2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Including Header Files.
#include "Player.h"
#include "Warrior.h"
#include "Priest.h"
#include "Mage.h"

// Including C++ Libraries
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

// Defining syntax
using namespace std;

// Function Prototypes.
void PrintStar();
void CreateAvatar();
void SetWarrior();
void SetPriest();
void SetMage();
void GetWarrior();
void GetPriest();
void GetMage();
void GetCharacters();

// Global Vectors
vector<Warrior> w;
vector<Priest> p;
vector<Mage> m;

/// * MAIN FUNCTION * (Program execution begins and ends here.)
int main()
{

	CreateAvatar();

	return 0;
}
/// * * *

void PrintStar()
{
	for (int i = 0; i < 120; i++)
	{
		cout << "*";
	}
	cout << endl;
}

void CreateAvatar()
{
	int choice=0;
	char move;

		while (1)
		{
			cout << endl;
			PrintStar();
			cout << setw(77) << "   C H A R A C T E R   C R E A T I O N " << endl;
			PrintStar();
			cout << " Which character would you like to create?" << endl << endl;
			cout << " 1. Create a Warrior! " << endl << " 2. Create a Priest! " << endl << " 3. Create a Mage! " << endl << " 4. Finish creating characters. " << endl;
			cout << endl << " My option: ";
			cin >> choice;
			cin.ignore();
			// Switch Menu to create character.
			switch (choice)
			{
			case 1:
			{
				SetWarrior();
				system("CLS");
				cout << endl << " * Warrior created * " << endl;
				break;
			}
			case 2:
			{
				SetPriest();
				system("CLS");
				cout << endl << " * Priest created * " << endl;
				break;
			}
			case 3:
			{
				SetMage();
				system("CLS");
				cout << endl << " * Mage created * " << endl;
				break;
			}
			case 4:
			{
				GetCharacters();
				cout << endl << " Character setup complete!" << endl << endl;
				PrintStar();
				cout << setw(74) << " * L E V E L  A C H I E V E D * " << endl << endl;
				PrintStar();
				exit(0);
			}

			default:
			{
				cout << " Please select a valid option from the menu. (1, 2, 3, 4) " << endl;
				break;
			}

			}
		} while (choice != 4);
		
		// cout << " Would you like to proceed to the next level? (y/n)";

}

void SetWarrior()
{
	int w1;
	system("CLS");
	cout << endl;
	PrintStar();
	cout << setw(77) << "  N E W  W A R R I O R :  " << endl;
	PrintStar();
	cout << " Which race do you want?" << endl << endl;
	cout << " 1. Human! " << endl << " 2. Elf! " << endl << " 3. Dwarf! " << endl << " 4. Orc. " << endl << " 5. Troll. " << endl;
	cout << endl << " Character Race: ";
	cin >> w1;
	Race warrior = static_cast<Race>(w1);
	cin.ignore();
	cout << endl << " What would you like your character's name to be? " << endl;
	string newname;
	cout << endl <<  " Character Name: ";
	getline(cin, newname);

	Warrior newWarrior{ newname, warrior, 200, 0};
	w.push_back(newWarrior);
}

void SetPriest()
{
	int p1;
	system("CLS");
	cout << endl;
	PrintStar();
	cout << setw(74) << "  N E W  P R I E S T :  " << endl;
	PrintStar();
	cout << " Which race do you want?" << endl << endl;
	cout << " 1. Human! " << endl << " 2. Elf! " << endl << " 3. Dwarf! " << endl << " 4. Orc. " << endl << " 5. Troll. " << endl;
	cout << endl << " Character Race: ";
	cin >> p1;
	Race priest = static_cast<Race>(p1);
	cin.ignore();
	cout << endl << " What would you like your character's name to be? " << endl;
	cout << endl << " Character Name: ";
	string pname;
	getline(cin, pname);
	Priest newPriest{pname, priest, 100, 200};
	p.push_back(newPriest);
}

void SetMage()
{
	int m1;
	system("CLS");
	cout << endl;
	PrintStar();
	cout << setw(70) << "  N E W  M A G E :  " << endl;
	PrintStar();
	cout << " Which race do you want?" << endl << endl;
	cout << " 1. Human! " << endl << " 2. Elf! " << endl << " 3. Dwarf! " << endl << " 4. Orc. " << endl << " 5. Troll. " << endl;
	cout << endl << " Character Race: ";
	cin >> m1;
	Race mage = static_cast<Race>(m1);
	cin.ignore();
	cout << endl << " What would you like your character's name to be? " << endl;
	cout << endl << " Character Name: ";
	string mname;
	getline(cin, mname);

	Mage newMage{ mname, mage, 200, 0};
	m.push_back(newMage);
}

void GetWarrior()
{
	for (auto i : w)
	{
		cout << " Argh! My name is " << i.getName() << "and" << i.whatRace() << " Warrior! " << endl << " I have " << i.getHitPoints() << " hitpoints and" << i.attack() << endl;
	}
}

void GetPriest()
{
	for (auto i : p)
	{
		cout << " Silence! My name is " << i.getName() << "and" << i.whatRace() << " Priest! " << endl << " I have " << i.getHitPoints() << " hitpoints and " << i.getMagicPoints() << " magicpoints." << i.attack() << endl;
	}
}

void GetMage()
{
	for (auto i : m)
	{
		cout << " Hahaha! You stand no chance! My name is " << i.getName() << "and" << i.whatRace() << " Mage! " << endl << " I have " << i.getHitPoints() << " hitpoints and" << i.attack() << endl;
	}
}

void GetCharacters()
{
	bool zero = false;
	system("CLS");
	cout << endl;
	PrintStar();
	cout << setw(77) << "  M Y  C H A R A C T E R S :  " << endl;
	PrintStar();
	cout << " * W A R R I O R S * " << endl << endl;
	for (auto i : w)
	{
			cout << " Argh! My name is " << i.getName() << " and" << i.whatRace() << " Warrior! " << endl << " I have " << i.getHitPoints() << " hitpoints and" << i.attack() << endl;
			zero == true;
	}
	if (zero == false)
	{
		cout << " * No warriors created * " << endl;
	}
	cout << endl;
	cout << " * P R I E S T S * " << endl << endl;
	for (auto i : p)
	{
		cout << " Silence! My name is " << i.getName() << " and" << i.whatRace() << " Priest! " << endl << " I have " << i.getHitPoints() << " hitpoints and " << i.getMagicPoints() << " magicpoints."<< i.attack() << endl;
		zero == true;
	}
	if (zero == false)
	{
		cout << " * No priests created * " << endl;
	}

	cout << endl;
	cout << " * M A G E S * " << endl << endl ;
	for (auto i : m)
	{
		cout << " Hahaha! You stand no chance! My name is " << i.getName() << " and" << i.whatRace() << " Mage! " << endl << " I have " << i.getHitPoints() << " hitpoints and" << i.attack() << endl;
		zero == true;
	}
	if (zero == false)
	{
		cout << " * No mages created * " << endl;
	}

	cout << endl;
	PrintStar();
}