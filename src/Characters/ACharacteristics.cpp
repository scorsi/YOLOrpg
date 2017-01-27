//
// Created by sylvain on 27/01/17.
//

#include "Characters/ACharacteristics.hh"

ACharacteristics::ACharacteristics(int strength, int stamina, int intelligence,
				   int agility)
  : _strength(strength), _stamina(stamina),
    _intelligence(intelligence), _agility(agility)
{}

ACharacteristics::~ACharacteristics()
{}

ACharacteristics &ACharacteristics::setStrength(int strength)
{
  this->_strength = strength;
  return *this;
}

ACharacteristics &ACharacteristics::setStamina(int stamina)
{
  this->_stamina = stamina;
  return *this;
}

ACharacteristics &ACharacteristics::setIntelligence(int intelligence)
{
  this->_intelligence = intelligence;
  return *this;
}

ACharacteristics &ACharacteristics::setAgility(int agility)
{
  this->_agility = agility;
  return *this;
}

int ACharacteristics::getStrength() const
{
  return this->_strength;
}

int ACharacteristics::getStamina() const
{
  return this->_stamina;
}

int ACharacteristics::getIntelligence() const
{
  return this->_intelligence;
}

int ACharacteristics::getAgility() const
{
  return this->_agility;
}