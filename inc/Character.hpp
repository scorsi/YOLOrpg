
#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <string>

class Character
{
/* Attributes */
protected:
	std::string _name;
  	int _health;
  	int _energy;
  	int _armor;

	int _strength;
	int _stamina;
	int _intelligence;
	int _spirit;
	int _agility;

public:
/* Constructor */
	Character(std::string const&);
/* Destructor */
	~Character();

/* Methods */
	void displayInfo() const;

/* Getters */
	std::string getName() const;
  	unsigned int getHealth() const;
  	unsigned int getArmor() const;

}; /* class Character */

#endif /* CHARACTER_H_ */
