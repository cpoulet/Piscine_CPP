#include "ScavTrap.hpp"
#define	SIZE(x) (sizeof(x)/sizeof(x[0]))

ScavTrap::ScavTrap(std::string name) : _name(name), _hitp(100), _maxhitp(100), _nrjp(50), _maxnrjp(50), _lvl(1), _mattk(20), _rattk(15), _armor(3) {
	std::cout << "SC4V-TP " << this->_name << " ACTIVATED .. BIP .. BIP .." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src) {
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

std::string	ScavTrap::getName() const {
	return this->_name;
}

void		ScavTrap::rangeAttack(std::string const & target) const {
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing a max of " << this->_rattk << " points of damage !" << std::endl;
}

void		ScavTrap::meleeAttack(std::string const & target) const {
	std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing a max of " << this->_mattk << " points of damage !" << std::endl;
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

void		ScavTrap::takeDamage(unsigned int amount) {
	if (amount <= this->_armor) {
		std::cout << "SC4V-TP " << this->_name << " armor protect him from damage !" << std::endl;
		return;
	}
	if (amount >= (this->_hitp + this->_armor)) {
		std::cout << "A doctor should be called to save " << this->_name << std::endl;
		this->_hitp = 0;
		return;
	}
	this->_hitp -= amount - this->_armor;
	std::cout << "SC4V-TP " << this->_name << " take " << amount - this->_armor << " hit points, his energy is now " << this->_hitp << " !" << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount) {
	this->_hitp += amount;
	this->_hitp = this->_hitp <= 100 ? this->_hitp : this->_maxhitp;
	std::cout << "SC4V-TP " << this->_name << " is repaired of " << amount << " energy points, his energy is now " << this->_hitp << " !" << std::endl;
}
