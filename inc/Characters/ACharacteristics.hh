//
// Created by sylvain on 27/01/17.
//

#ifndef SPARKLING_EYES_RPG_CHARACTERISTICS_HH
#define SPARKLING_EYES_RPG_CHARACTERISTICS_HH


class ACharacteristics
{
private:
  int _strength;
  int _stamina;
  int _intelligence;
  int _agility;

public:
  ACharacteristics(int strength, int stamina, int intelligence, int agility);

  virtual ~ACharacteristics();

protected:
  ACharacteristics &setStrength(int strength);

  ACharacteristics &setStamina(int stamina);

  ACharacteristics &setIntelligence(int intelligence);

  ACharacteristics &setAgility(int agility);

  int getStrength() const;

  int getStamina() const;

  int getIntelligence() const;

  int getAgility() const;
};


#endif //SPARKLING_EYES_RPG_CHARACTERISTICS_HH
