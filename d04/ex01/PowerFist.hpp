#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:

	PowerFist();
	PowerFist(PowerFist const &);
	PowerFist &	operator=(PowerFist const &);
	virtual ~PowerFist();

	virtual void	attack() const;

private:

};

#endif

