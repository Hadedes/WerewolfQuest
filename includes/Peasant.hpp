/*
 * Peasant.hpp
 *
 *  Created on: 1 févr. 2017
 *      Author: hugal
 */

#ifndef INCLUDES_PEASANT_HPP_
#define INCLUDES_PEASANT_HPP_

using namespace std;

#include <Graphics/Drawable.hpp>
#include <Graphics/Transformable.hpp>
#include "MovingCharacter.hpp"

class Peasant : public MovingCharacter, public sf::Drawable, public sf::Transformable {
public:
	Peasant();
	Peasant(Peasant const& PeasantToCopy);
	F32 getViewangle();
	F32* getSightline();
	S32 getWalkspeed();
	S32 getRunspeed();

	void setViewangle(F32 viewangle);
	void setSightline(float sightline[DIM_MAP]);
	void setWalkspeed(S32 walkspeed);
	void setRunspeed(S32 runspeed);

protected:
	S32 m_walkspeed; /*speed walking (not threatened) */
	S32 m_runspeed; /* speed running (threatened) */
	F32 m_viewangle; /* angle of sight line */
	F32 m_sightline[DIM_MAP]; /* vector containing sight line coordinates */

};

#endif /* INCLUDES_PEASANT_HPP_ */

