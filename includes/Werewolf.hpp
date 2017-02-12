#ifndef INCLUDES_WEREWOLF_HPP_
#define INCLUDES_WEREWOLF_HPP_

using namespace std;

#include <Graphics/Drawable.hpp>
#include <Graphics/Transformable.hpp>
#include "MovingCharacter.hpp"

class Werewolf :public MovingCharacter, public sf::Drawable, sf::Transformable {
public:
	Werewolf();
	Werewolf(Werewolf const& WerewolfToCopy);

	S32 getHumanspeed();
	S32 getWolfspeed();
	S32 getDamage();
	F32 getCasttime();

	void setHumanspeed(S32 humanspeed);
	void setWolfspeed(S32 wolfspeed);
	void setDamage(S32 wolfdamage);
	void setCasttime(S32 casttime);

	void HumanToWolf(sf::Sprite* wolfsprite);
	void WolfToHuman(sf::Sprite* humansprite);

protected:
	S32 m_humanspeed; /* speed in human form */
	S32 m_wolfspeed; /* speed in wolf form */
	S32 m_wolfdamage; /* damages dealt in wolf form */
	F32 m_casttime; /* cast time before tranform in sec or images ?*/
};

#endif /* INCLUDES_WEREWOLF_HPP_ */
