#ifndef INCLUDES_MOVINGCHARACTER_HPP_
#define INCLUDES_MOVINGCHARACTER_HPP_

#include <Graphics/Sprite.hpp>
#include <Graphics/Texture.hpp>
/*#include <Graphics/Transformable.hpp>*/
#include "Character.hpp"

class MovingCharacter : public Character {
public:
	MovingCharacter();
	virtual ~MovingCharacter() {};

	S32 getCurrentspeed();

	void setCurrentspeed(S32 currentspeed);

	void MoveRight(const sf::Texture& right_texture);
	void MoveLeft(const sf::Texture& left_texture);
	void MoveUp(const sf::Texture& up_texture);
	void MoveDown(const sf::Texture& down_texture);
	void MoveUpLeft(const sf::Texture& left_texture);
	void MoveUpRight(const sf::Texture& right_texture);
	void MoveDownLeft(const sf::Texture& downleft_texture);
	void MoveDownRight(const sf::Texture& downright_texture);

protected:
	sf::Sprite* m_sprite;
	S32 m_currentspeed;
};

#endif /* INCLUDES_MOVINGCHARACTER_HPP_ */
