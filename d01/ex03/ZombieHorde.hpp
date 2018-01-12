/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:31:03 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 15:24:10 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include <string>

class ZombieHorde {

public:

	ZombieHorde(int N);
	~ZombieHorde();

	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	Zombie*	randomChump();

private:

	int			_nbZombies;
	Zombie*		_horde;
	std::string	_type;
};

#endif
