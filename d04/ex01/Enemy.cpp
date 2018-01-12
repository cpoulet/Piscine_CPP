#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
	return;
}

Enemy::Enemy(Enemy const & src) {
	*this = src;
}

Enemy::~Enemy() {
}

Enemy &	Enemy::operator=(Enemy const & src) {
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;
}

std::string	const &	Enemy::getType() const {
	return this->_type;
}

int				Enemy::getHp() const {
	return this->_hp;
}

void			Enemy::takeDamage(int damage) {
	if (damage < 0)
		return;
	this->_hp -= damage;
}
