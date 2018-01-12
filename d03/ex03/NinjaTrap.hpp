#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include <string>
# include <ctime>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {

public:

	NinjaTrap(std::string);
	NinjaTrap(NinjaTrap const &);
	NinjaTrap &	operator=(NinjaTrap const &);
	~NinjaTrap();

	void		ninjaShoebox(FragTrap const &);
	void		ninjaShoebox(ScavTrap const &);
	void		ninjaShoebox(NinjaTrap const &);

};

#endif
