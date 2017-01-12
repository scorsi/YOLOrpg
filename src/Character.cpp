
#include <iostream>
#include <iomanip>
#include <string>
#include "Character.hpp"

/* Constructor */
Character::Character(std::string const& name)
{
	this->_name = name;
	this->_health = 100;
	this->_armor = 0;

	this->_strength = 5;
	this->_stamina = 5;
	this->_intelligence = 5;
	this->_spirit = 5;
	this->_agility = 5;
}

/* Destructor */
Character::~Character() {}


/* Methods */

void Character::displayInfo() const
{
	std::cout << std::setw(10) << this->_name << ":\n";
	std::cout << std::setw(10) << this->_health << " hp\n";
	std::cout << std::setw(10) << this->_armor << " armor\n";
	std::cout << std::setw(10) << this->_strength << " strength\n";
	std::cout << std::setw(10) << this->_stamina << " stamina\n";
	std::cout << std::setw(10) << this->_intelligence << " intelligence\n";
	std::cout << std::setw(10) << this->_spirit << " spirit\n";
	std::cout << std::setw(10) << this->_agility << " agility\n";
}

/* Getters */
std::string  Character::getName() const { return this->_name; }
unsigned int Character::getHealth() const { return this->_health; }
unsigned int Character::getArmor() const { return this->_armor; }
