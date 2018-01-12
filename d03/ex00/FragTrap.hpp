#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>

class FragTrap {

public:

	FragTrap(std::string);
	FragTrap(FragTrap const &);
	FragTrap &	operator=(FragTrap const &);
	~FragTrap();

	std::string	getName() const;
	void		rangeAttack(std::string const & target) const;
	void		meleeAttack(std::string const & target) const;
	void		vaulthunter_dot_exe(std::string const & target);
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
