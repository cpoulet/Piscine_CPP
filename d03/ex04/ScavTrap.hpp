#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	ScavTrap(std::string);
	ScavTrap(ScavTrap const &);
	ScavTrap &	operator=(ScavTrap const &);
	~ScavTrap();

	void		challengeNewcomer(std::string const & target);

};

#endif
