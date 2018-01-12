/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:27:51 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 13:34:32 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main() {
	ZombieEvent	ze = ZombieEvent();
	Zombie*		z;
	Zombie*		z2;

	z = ze.randomChump();
	z->announce();
	delete z;
	z = ze.newZombie("Toto");
	ze.setZombieType("liche");
	z2 = ze.newZombie("Toto");
	z->announce();
	z2->announce();
	delete z;
	delete z2;
}
