
#include <iostream>
#include <string>
#include "Game.hpp"

int main()
{
	Game game;

	game.start();

	std::string answer;
	std::cout << "Display the synopsis? (\"Y\" for \"Yes\")" << std::endl;
	std::cin >> answer;
	if (answer == "Y")
		game.showSynopsis();
	game.loop();

	return 0;
}
