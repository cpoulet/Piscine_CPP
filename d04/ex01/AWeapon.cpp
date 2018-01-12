#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :  _name(name), _apcost(apcost), _damage(damage) {
	return;
}

AWeapon::AWeapon(AWeapon const & src) {
	*this = src;
}

AWeapon::~AWeapon() {
}

AWeapon &	AWeapon::operator=(AWeapon const & src) {
	this->_name = src._name;
	this->_apcost = src._apcost;
	this->_damage = src._damage;
	return *this;
}

std::string const &	AWeapon::getName() const {
	return this->_name;
}

int			AWeapon::getAPCost() const {
	return this->_apcost;
}

int			AWeapon::getDamage() const {
	return this->_damage;
}
