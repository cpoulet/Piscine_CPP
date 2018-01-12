#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>

class ScavTrap {

public:

	ScavTrap(std::string);
	ScavTrap(ScavTrap const &);
	ScavTrap &	operator=(ScavTrap const &);
	~ScavTrap();

	std::string	getName() const;
	void		rangeAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;
	void		challengeNewcomer(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

private:

	std::string	_name;
	int			_hitp;
	int			_maxhitp;
	int			_nrjp;
	int			_maxnrjp;
	int			_lvl;
	int			_mattk;
	int			_rattk;
	int			_armor;

};

#endif
