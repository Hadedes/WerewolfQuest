/*
 * MovingCharacter.cpp
 *
 *  Created on: 6 févr. 2017
 *      Author: hugal
 */

#include "../includes/MovingCharacter.hpp"

MovingCharacter::MovingCharacter():Character(), m_sprite(NULL),
m_currentspeed(0) {
}

S32 MovingCharacter::getCurrentspeed(){
	return m_currentspeed;
}

void MovingCharacter::setCurrentspeed(S32 currentspeed){
	m_currentspeed = currentspeed;
	return;
}

void MovingCharacter::MoveRight(const sf::Texture& right_texture){
	m_sprite->setTexture(right_texture);
	sf::FloatRect rect = m_sprite->getGlobalBounds();
	F32 right_position = rect.left + rect.width;
	/* Test collision with right border of the map */
	if( right_position + m_currentspeed < MAP_WIDTH ){
		m_sprite->move(m_currentspeed,0.f);
	}
	else{
		F32 delta_x_to_limit = MAP_WIDTH - right_position;
		m_sprite->move(delta_x_to_limit,0.f);
	}
	return;
}

void MovingCharacter::MoveLeft(const sf::Texture& left_texture){
	m_sprite->setTexture(left_texture);
	sf::FloatRect rect = m_sprite->getGlobalBounds();
	F32 left_position = rect.left;
	/* Test collision with left border of the map */
	if( left_position - m_currentspeed > 0 ){
		m_sprite->move(-m_currentspeed,0.f);
	}
	else{
		F32 delta_x_to_limit = left_position;
		m_sprite->move(-delta_x_to_limit,0.f);
	}
	return;
}

void MovingCharacter::MoveUp(const sf::Texture& up_texture){
	m_sprite->setTexture(up_texture);
	sf::FloatRect rect = m_sprite->getGlobalBounds();
	F32 up_position = rect.top;
	/* Test collision with top border of the map */
	if( up_position - m_currentspeed > 0 ){
		m_sprite->move(0.f,-m_currentspeed);
	}
	else{
		F32 delta_y_to_limit = up_position;
		m_sprite->move(0.f,-delta_y_to_limit);
	}
	return;
}

void MovingCharacter::MoveDown(const sf::Texture& down_texture){
	m_sprite->setTexture(down_texture);
	sf::FloatRect rect = m_sprite->getGlobalBounds();
	F32 down_position = rect.top - rect.height;
	/* Test collision with bottom border of the map */
	if( down_position + m_currentspeed < MAP_HEIGHT ){
		m_sprite->move(-m_currentspeed,0.f);
	}
	else{
		F32 delta_y_to_limit = MAP_HEIGHT - down_position;
		m_sprite->move(0.f,delta_y_to_limit);
	}
	return;
}

void MovingCharacter::MoveUpLeft(const sf::Texture& upleft_texture){
	m_sprite->setTexture(upleft_texture);
	sf::FloatRect rect = m_sprite->getGlobalBounds();
	F32 up_position = rect.top;
	F32 left_position = rect.left;
	/* Test collision with top and left borders of the map */
	if( up_position - m_currentspeed > 0 && left_position - m_currentspeed > 0 ){
		m_sprite->move(-m_currentspeed,-m_currentspeed);
	}
	else if( up_position - m_currentspeed > 0 && left_position - m_currentspeed < 0 ){
		F32 delta_x_to_limit = left_position;
		m_sprite->move(-delta_x_to_limit,-m_currentspeed);
	}
	else if( up_position - m_currentspeed < 0 && left_position - m_currentspeed > 0 ){
			F32 delta_y_to_limit = up_position;
			m_sprite->move(-m_currentspeed,-delta_y_to_limit);
	}
	else{
		F32 delta_x_to_limit = left_position;
		F32 delta_y_to_limit = up_position;
		m_sprite->move(-delta_x_to_limit,-delta_y_to_limit);
	}
	return;
}

void MovingCharacter::MoveUpRight(const sf::Texture& upright_texture){
	m_sprite->setTexture(upright_texture);
	sf::FloatRect rect = m_sprite->getGlobalBounds();
	F32 up_position = rect.top;
	F32 right_position = rect.left + rect.width;
	/* Test collision with top and left borders of the map */
	if( up_position - m_currentspeed > 0 && right_position + m_currentspeed < MAP_WIDTH){
		m_sprite->move(m_currentspeed,-m_currentspeed);
	}
	else if( up_position - m_currentspeed > 0 && right_position + m_currentspeed > MAP_WIDTH){
		F32 delta_x_to_limit = MAP_WIDTH - right_position;
		m_sprite->move(delta_x_to_limit,-m_currentspeed);
	}
	else if( up_position - m_currentspeed < 0 && right_position + m_currentspeed < MAP_WIDTH){
			F32 delta_y_to_limit = up_position;
			m_sprite->move(m_currentspeed,-delta_y_to_limit);
	}
	else{
		F32 delta_x_to_limit = right_position;
		F32 delta_y_to_limit = up_position;
		m_sprite->move(delta_x_to_limit,-delta_y_to_limit);
	}
	return;
}

void MovingCharacter::MoveDownLeft(const sf::Texture& downleft_texture){
	m_sprite->setTexture(downleft_texture);
	sf::FloatRect rect = m_sprite->getGlobalBounds();
	F32 down_position = rect.top - rect.height;
	F32 left_position = rect.left;
	/* Test collision with down and left borders of the map */
	if( down_position + m_currentspeed < MAP_HEIGHT && left_position - m_currentspeed > 0 ){
		m_sprite->move(-m_currentspeed,m_currentspeed);
	}
	else if( down_position + m_currentspeed < MAP_HEIGHT && left_position - m_currentspeed < 0 ){
		F32 delta_x_to_limit = left_position;
		m_sprite->move(-delta_x_to_limit,m_currentspeed);
	}
	else if( down_position + m_currentspeed > MAP_HEIGHT && left_position - m_currentspeed > 0 ){
			F32 delta_y_to_limit = MAP_HEIGHT - down_position;
			m_sprite->move(-m_currentspeed,delta_y_to_limit);
	}
	else{
		F32 delta_x_to_limit = left_position;
		F32 delta_y_to_limit = MAP_HEIGHT - down_position;
		m_sprite->move(-delta_x_to_limit,delta_y_to_limit);
	}
	return;
}

void MovingCharacter::MoveDownRight(const sf::Texture& downright_texture){
	m_sprite->setTexture(downright_texture);
	sf::FloatRect rect = m_sprite->getGlobalBounds();
	F32 down_position = rect.top - rect.height;
	F32 right_position = rect.left + rect.width;
	/* Test collision with down and right borders of the map */
	if( down_position + m_currentspeed < MAP_HEIGHT && right_position + m_currentspeed < MAP_WIDTH ){
		m_sprite->move(m_currentspeed,m_currentspeed);
	}
	else if( down_position + m_currentspeed < MAP_HEIGHT && right_position + m_currentspeed > MAP_WIDTH ){
		F32 delta_x_to_limit = MAP_WIDTH - right_position;
		m_sprite->move(delta_x_to_limit,m_currentspeed);
	}
	else if( down_position + m_currentspeed > MAP_HEIGHT && right_position + m_currentspeed < MAP_WIDTH ){
			F32 delta_y_to_limit = MAP_HEIGHT - down_position;
			m_sprite->move(m_currentspeed,delta_y_to_limit);
	}
	else{
		F32 delta_x_to_limit = MAP_WIDTH - right_position;
		F32 delta_y_to_limit = MAP_HEIGHT - down_position;
		m_sprite->move(delta_x_to_limit,delta_y_to_limit);
	}
	return;
}












