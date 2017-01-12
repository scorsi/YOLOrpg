
#include <iostream>
#include <string>
#include <unistd.h> /* Just for usleep in showSynopsis() */
#include "Game.hpp"


Game::Game()
{
	this->_perso = NULL;
}

Game::~Game()
{
	std::cout << "You finally died into your own blood." << std::endl;
	if (this->_perso != NULL)
		delete this->_perso;
}

void Game::start(void)
{
	if (this->_perso != NULL)
		delete this->_perso;

	std::string champName;

	std::cout << "Welcome to YOLOrpg!\n" <<
		"Please type your champion's name." << std::endl;
	std::cin >> champName;
	std::cout << champName << "? Nice name!\nLet's start the game.\n";

	this->_perso = new Character(champName);
}

void Game::showSynopsis(void)
{
	size_t timeToSleep = 500000;

	std::cout << "\n\n=======================================\n\n";
	std::cout << "SYNOPSIS";
	std::cout << "\n\n=======================================\n\n";

	std::cout << "You are a graduate of a high school of heroes.\n\n";
	usleep(timeToSleep);
	std::cout << "You passed your last exam " <<
		"and you get your degree of heroes.\n";
	usleep(timeToSleep);
	std::cout << "During one year, " <<
		"you passed all of your time saving cats.\n";
	usleep(timeToSleep);
	std::cout << "One day, you were so bored " <<
		"that you spend all your time into a small tavern.\n";
	usleep(timeToSleep);
	std::cout << "You talked to an outsider for hours," <<
		"he told you about a dungeon which none ever came back from.\n";
	usleep(timeToSleep);
	std::cout << "You were so excited to have an adventure that " <<
		"you prepared yourself and you traveled to it.\n";
	usleep(timeToSleep);
	std::cout << "You enter into the dungeon. " <<
		"You reach the first floor.\n";
	usleep(timeToSleep);

	std::cout << "\n=======================================\n" << std::endl;
}

void Game::loop(void)
{
	std::string action = "C";
	do {
		std::cout << "Type 'H' to see help." << std::endl;
		std::cin >> action;
		if (action == "Q") break;
		this->action(action);
		std::cout << "\n\n=======================================\n" << std::endl;

	} while (true); /* Infinite loop is life. */
}

void Game::action(std::string const& action)
{
	if (action == "H")
		this->displayHelp();
	else if (action == "C")
		this->_perso->displayInfo();
}

void Game::displayHelp(void) const
{
	std::cout << "'Q': quit the game.\n";
	std::cout << "'C': display your character's informations.\n";
}
