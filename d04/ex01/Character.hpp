#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {

public:

	Character(std::string const & name);
	Character(Character const &);
	Character &	operator=(Character const &);
	virtual ~Character();

	void				recoverAP();
	void				equip(AWeapon*);
	void				attack(Enemy*);
	int					getAp() const;
	AWeapon*			getWeapon() const;
	std::string	virtual	getName() const;

private:

	Character();

	std::string			_name;
	int					_ap;
	AWeapon*			_w;

};

std::ostream &	operator<<(std::ostream &, Character const &);

#endif

