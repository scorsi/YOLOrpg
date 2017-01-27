//
// Created by sylvain on 27/01/17.
//

#include <iostream>
#include <iomanip>
#include "Characters/Character.hh"

Character::Character(std::string const &name)
  : ACharacteristics(1, 1, 1, 1), _name(name), _health(100), _armor(0)
{}

Character::~Character()
{}

void Character::displayInfo() const
{
  std::cout << std::setw(10) << this->getName() << ":\n";
  std::cout << std::setw(10) << this->getHealth() << " hp\n";
  std::cout << std::setw(10) << this->getEnergy() << " energy\n";
  std::cout << std::setw(10) << this->getArmor() << " armor\n";
  std::cout << std::setw(10) << this->getStrength() << " strength\n";
  std::cout << std::setw(10) << this->getStamina() << " stamina\n";
  std::cout << std::setw(10) << this->getIntelligence() << " intelligence\n";
  std::cout << std::setw(10) << this->getAgility() << " agility" << std::endl;
}

Character &Character::setHealth(int health)
{
  this->_health = health;
  return *this;
}

Character &Character::setEnergy(int energy)
{
  this->_energy = energy;
  return *this;
}

Character &Character::setArmor(int armor)
{
  this->_armor = armor;
  return *this;
}

std::string Character::getName() const
{
  return this->_name;
}

int Character::getHealth() const
{
  return this->_health;
}

int Character::getEnergy() const
{
  return this->_energy;
}

int Character::getArmor() const
{
  return this->_armor;
}

