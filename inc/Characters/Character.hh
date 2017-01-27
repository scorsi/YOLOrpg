//
// Created by sylvain on 27/01/17.
//

#ifndef SPARKLING_EYES_RPG_CHARACTER_HH
#define SPARKLING_EYES_RPG_CHARACTER_HH

#include <string>
#include "ACharacteristics.hh"

class Character : public ACharacteristics
{
protected:
  std::string _name;
  int _health;
  int _energy;
  int _armor;

public:
  Character(std::string const &name);

  virtual ~Character();

  void displayInfo() const;

  Character &setHealth(int health);

  Character &setEnergy(int energy);

  Character &setArmor(int armor);

  std::string getName() const;

  int getHealth() const;

  int getEnergy() const;

  int getArmor() const;

}; /* class Character */

#endif // SPARKLING_EYES_RPG_CHARACTER_HH
