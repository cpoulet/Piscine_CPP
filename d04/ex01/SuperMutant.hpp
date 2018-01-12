#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

	SuperMutant();
	SuperMutant(SuperMutant const &);
	SuperMutant &	operator=(SuperMutant const &);
	~SuperMutant();

	void	takeDamage(int);

};

#endif

