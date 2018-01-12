#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {
	return;
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon("Power Fist", 8, 50) {
	*this = src;
}

PowerFist::~PowerFist() {
}

PowerFist &	PowerFist::operator=(PowerFist const & src) {
	return *this;
}

void			PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
