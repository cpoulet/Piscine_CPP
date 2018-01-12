#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy {

public:

	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &);
	Enemy &	operator=(Enemy const &);
	virtual ~Enemy();

	std::string const &	getType() const;
	int					getHp() const;

	virtual void		takeDamage(int);

protected:

	Enemy();

	int					_hp;
	std::string			_type;

};

#endif

