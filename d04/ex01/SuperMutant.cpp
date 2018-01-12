#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "SuperMutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(170, "SuperMutant") {
	*this = src;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const & src) {
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;
}

void			SuperMutant::takeDamage(int damage) {
	damage -= 3;
	if (damage < 0)
		return;
	this->_hp -= damage;
}
