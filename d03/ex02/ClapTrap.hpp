#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include <ctime>

class ClapTrap {

public:

	ClapTrap(std::string);
	ClapTrap(ClapTrap const &);
	ClapTrap &	operator=(ClapTrap const &);
	~ClapTrap();

	std::string	getName() const;
	void		rangeAttack(std::string const &) const;
	void		meleeAttack(std::string const &) const;
	void		takeDamage(unsigned int);
	void		beRepaired(unsigned int);

protected:

	std::string	_name;
	int			_hitp;
	int			_maxhitp;
	int			_nrjp;
	int			_maxnrjp;
	int			_lvl;
	int			_mattk;
	int			_rattk;
	int			_armor;

private:
	ClapTrap();

};

#endif
