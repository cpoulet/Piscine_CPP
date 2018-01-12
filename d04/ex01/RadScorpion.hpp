#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

	RadScorpion();
	RadScorpion(RadScorpion const &);
	RadScorpion &	operator=(RadScorpion const &);
	~RadScorpion();

};

#endif

