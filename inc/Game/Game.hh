//
// Created by sylvain on 27/01/17.
//

#ifndef GAME_H_
#define GAME_H_


#include "Characters/Character.hh"

class Game
{
private:
  Character *_perso;

public:
  Game();

  ~Game();

  void start();

  void loop();

private:
  void action(std::string const &);

  void displayHelp() const;

};

#endif
