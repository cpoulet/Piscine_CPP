#include "ClapTrap.hpp"
#define	SIZE(x) (sizeof(x)/sizeof(x[0]))

ClapTrap::ClapTrap(std::string name) : _name(name) {
	std::cout << "CL4P-TP CREATED : ";
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "CL4P-TP DESTROYED." << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src) {
	this->_name = src._name;
	this->_hitp = src._hitp;
	this->_maxhitp = src._maxhitp;
	this->_nrjp = src._nrjp;
	this->_maxnrjp = src._maxnrjp;
	this->_lvl = src._lvl;
	this->_mattk = src._mattk;
	this->_rattk = src._rattk;
	this->_armor = src._armor;
	return *this;
}

std::string	ClapTrap::getName() const {
	return this->_name;
}

void		ClapTrap::rangeAttack(std::string const & target) const {
	std::cout << this->_name << " attacks " << target << " at range, causing a max of " << this->_rattk << " points of damage !" << std::endl;
}

void		ClapTrap::meleeAttack(std::string const & target) const {
	std::cout << this->_name << " attacks " << target << " at melee, causing a max of " << this->_mattk << " points of damage !" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	if (amount <= this->_armor) {
		std::cout << this->_name << " armor protect him from damage !" << std::endl;
		return;
	}
	if (amount >= (this->_hitp + this->_armor)) {
		std::cout << "A doctor should be called to save " << this->_name << std::endl;
		this->_hitp = 0;
		return;
	}
	this->_hitp -= amount - this->_armor;
	std::cout << this->_name << " take " << amount - this->_armor << " hit points, his energy is now " << this->_hitp << " !" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	this->_hitp += amount;
	this->_hitp = this->_hitp <= 100 ? this->_hitp : this->_maxhitp;
	std::cout << this->_name << " is repaired of " << amount << " energy points, his energy is now " << this->_hitp << " !" << std::endl;
}
