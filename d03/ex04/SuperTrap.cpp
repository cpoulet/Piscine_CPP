#include "SuperTrap.hpp"
#define	SIZE(x) (sizeof(x)/sizeof(x[0]))

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name) {
	this->_hitp = 100;
	this->_maxhitp = 100;
	this->_nrjp = 100;
	this->_maxnrjp = 100;
	this->_mattk = 30;
	this->_rattk = 20;
	this->_armor = 5;
	std::cout << "SUP3R-TP " << this->_name << " ACTIVATED .. BIP .. BIP .." << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) : ClapTrap(src._name) {
	*this = src;
}

SuperTrap::~SuperTrap() {
	std::cout << "SUP3R-TP " << this->_name << " DESACTIVATED .. TIIOUUUT." << std::endl;
}

SuperTrap &	SuperTrap::operator=(SuperTrap const & src) {
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
