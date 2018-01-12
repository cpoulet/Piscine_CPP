#include "FragTrap.hpp"
#define	SIZE(x) (sizeof(x)/sizeof(x[0]))

FragTrap::FragTrap(std::string name) : _name(name), _hitp(100), _maxhitp(100), _nrjp(100), _maxnrjp(100), _lvl(1), _mattk(30), _rattk(20), _armor(5) {
	std::cout << "FR4G-TP " << this->_name << " ACTIVATED .. BIP .. BIP .." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) {
	*this = src;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " << this->_name << " DESACTIVATED .. TIIOUUUT." << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & src) {
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

std::string	FragTrap::getName() const {
	return this->_name;
}

void		FragTrap::rangeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing a max of " << this->_rattk << " points of damage !" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target) const {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing a max of " << this->_mattk << " points of damage !" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {
	int			index;
	std::string	attack[] = {"Coincidental Combustion",
							"Drop the Hammer",
							"Load 'n' Splode",
							"Maniacal Laughter",
							"Kick Him While He's Down",
							"Rope-a-Derp",
							"I Am Rubber, You Are Glue",
							"Hyperion Punch"};
	if (this->_nrjp < 25) {
		std::cout << "FR4G-TP " << this->_name << " is out of energie !" << std::endl;
		return;
	}
	this->_nrjp -= 25;
	index = rand() % SIZE(attack);
	std::cout << "FR4G-TP " << this->_name << " use the attacks : '" << attack[index] << "' on " << target << " !" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount) {
	if (amount <= this->_armor) {
		std::cout << "FR4G-TP " << this->_name << " armor protect him from damage !" << std::endl;
		return;
	}
	if (amount >= (this->_hitp + this->_armor)) {
		std::cout << "A doctor should be called to save " << this->_name << std::endl;
		this->_hitp = 0;
		return;
	}
	this->_hitp -= amount - this->_armor;
	std::cout << "FR4G-TP " << this->_name << " take " << amount - this->_armor << " hit points, his energy is now " << this->_hitp << " !" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount) {
	this->_hitp += amount;
	this->_hitp = this->_hitp <= 100 ? this->_hitp : this->_maxhitp;
	std::cout << "FR4G-TP " << this->_name << " is repaired of " << amount << " energy points, his energy is now " << this->_hitp << " !" << std::endl;
}
