#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
public:
	Character();
	~Character();

	void setStrength(int strength);
	void setDexterity(int dexterity);
	void setConstitution(int constitution);
	void setIntelligence(int intelligence);
	void setWisdom(int wisdom);
	void setCharisma(int charisma);
	
	int getStrength();
	int getDexterity();
	int getConstitution();	
	int getIntelligence();
	int getWisdom();
	int getCharisma();


protected:
	int m_strength;
	int m_dexterity;
	int m_constitution;
	int m_intelligence;
	int m_wisdom;
	int m_charisma;

private:

};

#endif // !CHARACTER_H

