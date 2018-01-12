#include "NinjaTrap.hpp"
#define	SIZE(x) (sizeof(x)/sizeof(x[0]))

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name) {
	this->_hitp = 60;
	this->_maxhitp = 60;
	this->_nrjp = 120;
	this->_maxnrjp = 120;
	this->_mattk = 60;
	this->_rattk = 5;
	this->_armor = 0;
	std::cout << "N1NJ4-TP " << this->_name << " ACTIVATED .. BIP .. BIP .." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src._name) {
	std::cout << "N1NJ4-TP " << this->_name << " ACTIVATED .. BIP .. BIP .." << std::endl;
	*this = src;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "N1NJ4-TP " << this->_name << " DESACTIVATED .. TIIOUUUT." << std::endl;
}

NinjaTrap &	NinjaTrap::operator=(NinjaTrap const & src) {
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

void		NinjaTrap::ninjaShoebox(FragTrap const & target) {
	int			index;
	if (this->_nrjp < 25) {
		std::cout << "N1NJ4-TP " << this->_name << " is out of energie !" << std::endl;
		return;
	}
	this->_nrjp -= 25;
	std::cout << "N1NJ4-TP " << this->_name << " kick the FragTrap " << target.getName() << " in the boulons !" << std::endl;
}

void		NinjaTrap::ninjaShoebox(ScavTrap const & target) {
	int			index;
	if (this->_nrjp < 25) {
		std::cout << "N1NJ4-TP " << this->_name << " is out of energie !" << std::endl;
		return;
	}
	this->_nrjp -= 25;
	std::cout << "N1NJ4-TP " << this->_name << " hit the ScavTrap " << target.getName() << " between the diods !" << std::endl;
}

void		NinjaTrap::ninjaShoebox(NinjaTrap const & target) {
	int			index;
	if (this->_nrjp < 25) {
		std::cout << "N1NJ4-TP " << this->_name << " is out of energie !" << std::endl;
		return;
	this->_nrjp -= 25;
	}
	std::cout << "N1NJ4-TP " << this->_name << " pull the NinjaTrap " << target.getName() << " cables !" << std::endl;
}
