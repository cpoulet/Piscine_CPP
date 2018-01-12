#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon("Plasma Rifle", 5, 21) {
	*this = src;
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const & src) {
    this->_name = src.getName();
    this->_apcost = src.getAPCost();
    this->_damage = src.getDamage();
	return *this;
}

void			PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu poiuuu*" << std::endl;
}
