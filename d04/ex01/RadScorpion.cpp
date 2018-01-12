#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(80, "RadScorpion") {
	*this = src;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion &	RadScorpion::operator=(RadScorpion const & src) {
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;
}
