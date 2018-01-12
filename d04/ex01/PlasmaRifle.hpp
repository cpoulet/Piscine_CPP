#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &);
	PlasmaRifle &	operator=(PlasmaRifle const &);
	~PlasmaRifle();

	void	attack() const;

};

#endif

