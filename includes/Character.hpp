#ifndef INCLUDES_CHARACTER_HPP_
#define INCLUDES_CHARACTER_HPP_

using namespace std;

#include <string>
#include "types.hpp"

class Character {
public:
	Character();
	Character(Character const& CharacterToCopy);
	virtual ~Character() {};
	S32 getHealth() const;
	std::string getName() const;

	void setHealth(S32 health);
	void setName(string name);

	void LooseHealth(int degats);

protected:
	S32 m_health;
	std::string m_name;
};

#endif /* INCLUDES_CHARACTER_HPP_ */
