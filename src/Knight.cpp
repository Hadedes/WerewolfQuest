/*
 * Knight.cpp
 *
 *  Created on: 6 févr. 2017
 *      Author: hugal
 */

#include "../includes/Knight.hpp"

Knight::Knight():MovingCharacter(), m_walkspeed(0), m_runspeed(0),
m_viewangle(0), m_damage(0)
{
	S32 i;
	for(i=0;i<DIM_MAP;i++)
			m_sightline[i] = 0;
}

Knight::Knight(Knight const & KnightToCopy):m_walkspeed(KnightToCopy.m_walkspeed),
		m_runspeed(KnightToCopy.m_runspeed),m_viewangle(KnightToCopy.m_viewangle),
		m_damage(KnightToCopy.m_damage)
{
	S32 i;
	for(i=0;i<DIM_MAP;i++)
		m_sightline[i] = KnightToCopy.m_sightline[i];

	m_sprite = KnightToCopy.m_sprite;
	m_currentspeed = KnightToCopy.m_currentspeed;
}

F32 Knight::getViewangle(){
	return m_viewangle;
}

F32* Knight::getSightline(){
	return m_sightline;
}

S32 Knight::getWalkspeed(){
	return m_walkspeed;
}

S32 Knight::getRunspeed(){
	return m_runspeed;
}

S32 Knight::getDamage(){
	return m_damage;
}

void Knight::setViewangle(F32 viewangle){
	m_viewangle = viewangle;
	return;
}

void Knight::setSightline(float sightline[DIM_MAP]){
	S32 i;
	for(i=0;i<DIM_MAP;i++)
		m_sightline[i] = sightline[i];
	return;
}

void Knight::setWalkspeed(S32 walkspeed){
	m_walkspeed = walkspeed;
	return;
}

void Knight::setRunspeed(S32 runspeed){
	m_walkspeed = runspeed;
	return;
}

void Knight::setDamage(S32 damage){
	m_damage = damage;
	return;
}

