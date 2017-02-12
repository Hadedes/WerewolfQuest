#include "../includes/Character.hpp"
 /* High level Character class */
Character::Character():m_health(100), m_name("NO_NAME") {
}

Character::Character(Character const& CharacterToCopy)
:m_health(CharacterToCopy.m_health), m_name(CharacterToCopy.m_name)
{
}

S32 Character::getHealth() const{
	return this->m_health;
}

string Character::getName() const{
	return this->m_name;
}

void Character::setHealth(S32 health){
	this->m_health = health;
	return;
}

void Character::LooseHealth(S32 degats){
	if (degats > m_health){
		m_health = 0;
	}

	else{
		m_health -= degats;
	}
	return;
}

