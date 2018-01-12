#include "ScavTrap.hpp"
#define	SIZE(x) (sizeof(x)/sizeof(x[0]))

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitp = 100;
	this->_maxhitp = 100;
	this->_nrjp = 50;
	this->_maxnrjp = 50;
	this->_mattk = 20;
	this->_rattk = 15;
	this->_armor = 3;
	std::cout << "SC4V-TP " << this->_name << " ACTIVATED .. BIP .. BIP .." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src._name) {
	std::cout << "SC4V-TP " << this->_name << " ACTIVATED .. BIP .. BIP .." << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap() {
	std::cout << "SC4V-TP " << this->_name << " DESACTIVATED .. TIIOUUUT." << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & src) {
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

void		ScavTrap::challengeNewcomer(std::string const & target) {
	int			index;
	std::string	chall[] = {"Die atrociously",
							"Show all he got",
							"Say 'Yes' until the end",
							"Hit lportay in the balls",
							"Eat a kilo of cockroach",
							"Stimulate his prostate",
							"Call his mum"};
	if (this->_nrjp < 25) {
		std::cout << "SC4V-TP " << this->_name << " is out of energie !" << std::endl;
		return;
	}
	this->_nrjp -= 25;
	index = rand() % SIZE(chall);
	std::cout << "SC4V-TP " << this->_name << " ask at " << target << " to " << chall[index] << " !" << std::endl;
}
