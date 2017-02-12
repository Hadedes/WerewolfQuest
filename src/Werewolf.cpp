#include "../includes/Werewolf.hpp"

Werewolf::Werewolf():MovingCharacter(), m_humanspeed(0), m_wolfspeed(0),
m_wolfdamage(0), m_casttime(0)
{
}

Werewolf::Werewolf(Werewolf const & WerewolfToCopy):m_humanspeed(WerewolfToCopy.m_humanspeed),
		m_wolfspeed(WerewolfToCopy.m_wolfspeed),m_wolfdamage(WerewolfToCopy.m_wolfdamage),
		m_casttime(WerewolfToCopy.m_casttime)
{
}

S32 Werewolf::getHumanspeed(){
	return m_humanspeed;
}

S32 Werewolf::getWolfspeed(){
	return m_wolfspeed;
}


S32 Werewolf::getDamage(){
	return m_wolfdamage;
}

F32 Werewolf::getCasttime(){
	return m_casttime;
}

void Werewolf::setHumanspeed(S32 walkspeed){
	m_humanspeed = walkspeed;
	return;
}

void Werewolf::setWolfspeed(S32 wolfspeed){
	m_wolfspeed = wolfspeed;
	return;
}

void Werewolf::setDamage(S32 wolfdamage){
	m_wolfdamage = wolfdamage;
	return;
}

void Werewolf::setCasttime(S32 casttime){
	m_casttime = casttime;
	return;
}

void Werewolf::HumanToWolf(sf::Sprite* wolfsprite){
	m_currentspeed = m_wolfspeed;
	m_sprite = wolfsprite;
	return;
	}

void Werewolf::WolfToHuman(sf::Sprite* humansprite){
	m_currentspeed = m_humanspeed;
	m_sprite = humansprite;
	return;
	}

