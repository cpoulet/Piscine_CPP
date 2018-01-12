#include "FragTrap.hpp"
#define	SIZE(x) (sizeof(x)/sizeof(x[0]))

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitp = 100;
	this->_maxhitp = 100;
	this->_nrjp = 100;
	this->_maxnrjp = 100;
	this->_mattk = 30;
	this->_rattk = 20;
	this->_armor = 5;
	std::cout << "FR4G-TP " << this->_name << " ACTIVATED .. BIP .. BIP .." << std::endl;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src._name) {
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
