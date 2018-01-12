#include "Character.hpp"

Character::Character(std::string const & name) : _name(name), _ap(40), _w(NULL) {
	return;
}

Character::Character(Character const & src) {
	*this = src;
}

Character::~Character() {
}

Character &	Character::operator=(Character const & src) {
	this->_name = src._name;
	this->_ap = src._ap;
	this->_w = src._w;
	return *this;
}

std::string		Character::getName() const {
	return this->_name;
}

int				Character::getAp() const {
	return this->_ap;
}

AWeapon*		Character::getWeapon() const {
	return this->_w;
}

void			Character::recoverAP() {
	this->_ap = (this->_ap >= 30) ? 40 : this->_ap + 10;
}

void			Character::equip(AWeapon* w) {
	this->_w = w;
}

void			Character::attack(Enemy* e) {
	std::cout << this->_name << " attacks " << e->getType() << " with a " << this->_w->getName() << std::endl;
	if (this->_w == NULL or this->_ap < this->_w->getAPCost())
		return;
	this->_ap -= this->_w->getAPCost();
	this->_w->attack();
	e->takeDamage(this->_w->getAPDamage());
	if (e->getHp() <= 0)
		delete e;
}

std::ostream &	operator<<(std::ostream & o, Character const & rhs) {
	AWeapon*	w = rhs.getWeapon();
	if (w == NULL)
		o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << w->getName() << std::endl;
	return o;
}
