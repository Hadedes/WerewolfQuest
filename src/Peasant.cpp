/*
 * Peasant.cpp
 *
 *  Created on: 1 févr. 2017
 *      Author: hugal
 */

#include "../includes/Peasant.hpp"

Peasant::Peasant():MovingCharacter(), m_walkspeed(0), m_runspeed(0),
m_viewangle(0)
{
	S32 i;
	for(i=0;i<DIM_MAP;i++)
			m_sightline[i] = 0;
}

Peasant::Peasant(Peasant const & PeasantToCopy):m_walkspeed(PeasantToCopy.m_walkspeed),
		m_runspeed(PeasantToCopy.m_runspeed),m_viewangle(PeasantToCopy.m_viewangle)
{
	S32 i;
	for(i=0;i<DIM_MAP;i++)
		m_sightline[i] = PeasantToCopy.m_sightline[i];

	m_sprite = PeasantToCopy.m_sprite;
	m_currentspeed = PeasantToCopy.m_currentspeed;
}

F32 Peasant::getViewangle(){
	return m_viewangle;
}

F32* Peasant::getSightline(){
	return m_sightline;
}

S32 Peasant::getWalkspeed(){
	return m_walkspeed;
}

S32 Peasant::getRunspeed(){
	return m_runspeed;
}

void Peasant::setViewangle(F32 viewangle){
	m_viewangle = viewangle;
	return;
}

void Peasant::setSightline(float sightline[DIM_MAP]){
	S32 i;
	for(i=0;i<DIM_MAP;i++)
		m_sightline[i] = sightline[i];
	return;
}

void Peasant::setWalkspeed(S32 walkspeed){
	m_walkspeed = walkspeed;
	return;
}

void Peasant::setRunspeed(S32 runspeed){
	m_walkspeed = runspeed;
	return;
}





