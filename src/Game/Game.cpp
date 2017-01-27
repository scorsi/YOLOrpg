//
// Created by sylvain on 27/01/17.
//

#include <iostream>
#include <unistd.h>
#include "Game/Game.hh"
#include "Game/GameUtils.hh"

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

  display_texts("res/texts/synopsis.txt");
}

void Game::loop(void)
{
  std::string action = "C";
  do
    {
      std::cout << "Type 'H' to see help." << std::endl;
      std::cin >> action;
      if (action == "Q") break;
      this->action(action);
      std::cout << "\n\n=======================================\n" << std::endl;

    }
  while (true); /* Infinite loop is life. */
}

void Game::action(std::string const &action)
{
  if (action == "H")
    this->displayHelp();
  else if (action == "C")
    this->_perso->displayInfo();
}

void Game::displayHelp(void) const
{
  std::cout << "'Q': quit the texts.\n";
  std::cout << "'C': display your character's informations.\n";
}
