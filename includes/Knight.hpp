/*
 * Knight.hpp
 *
 *  Created on: 6 févr. 2017
 *      Author: hugal
 */

#ifndef INCLUDES_KNIGHT_HPP_
#define INCLUDES_KNIGHT_HPP_

using namespace std;

#include "MovingCharacter.hpp"

class Knight : public MovingCharacter, public sf::Drawable, sf::Transformable {
public:
	Knight();
	Knight(Knight const& PeasantToCopy);
	F32 getViewangle();
	F32* getSightline();
	S32 getWalkspeed();
	S32 getRunspeed();
	S32 getDamage();

	void setViewangle(F32 viewangle);
	void setSightline(float sightline[DIM_MAP]);
	void setWalkspeed(S32 walkspeed);
	void setRunspeed(S32 runspeed);
	void setDamage(S32 damage);

protected:
	S32 m_walkspeed;
	S32 m_runspeed;
	F32 m_viewangle;
	S32 m_damage;
	F32 m_sightline[DIM_MAP];
};



#endif
