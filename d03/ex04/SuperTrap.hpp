#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap(std::string);
	SuperTrap(SuperTrap const &);
	SuperTrap &	operator=(SuperTrap const &);
	~SuperTrap();

};

#endif
