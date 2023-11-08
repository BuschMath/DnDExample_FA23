#include "Character.h"

Character::Character()
{
}

Character::~Character()
{
}

void Character::setStrength(int strength)
{
	if (strength <= 20 && strength >= 0)
		m_strength = strength;
	else
		m_strength = -1;
}

void Character::setDexterity(int dexterity)
{
	m_dexterity = dexterity;
}

void Character::setConstitution(int constitution)
{
	m_constitution = constitution;
}

void Character::setIntelligence(int intelligence)
{
	m_intelligence = intelligence;
}

void Character::setWisdom(int wisdom)
{
	m_wisdom = wisdom;
}

void Character::setCharisma(int charisma)
{
	m_charisma = charisma;
}

int Character::getStrength()
{
	return m_strength;
}

int Character::getDexterity()
{
	return m_dexterity;
}

int Character::getConstitution()
{
	return m_constitution;
}

int Character::getIntelligence()
{
	return m_intelligence;
}

int Character::getWisdom()
{
	return m_wisdom;
}

int Character::getCharisma()
{
	return m_charisma;
}
