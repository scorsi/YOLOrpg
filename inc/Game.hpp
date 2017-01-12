
#ifndef GAME_H_
#define GAME_H_

#include "Character.hpp"

class Game
{
/* Attributes */
private:
	Character* _perso; /* Player Character */

public:
/* Constructor */
	Game();
/* Destructor */
	~Game();

/* Methods */
	void start(void); /* Intentiate the player */
	void showSynopsis(void); /* Display the history */
	void loop(void); /* The loop game */

private:
	void action(std::string const&); /* Handle the action */
	void displayHelp(void) const; /* Loops helpers */

}; /* class Game */

#endif
