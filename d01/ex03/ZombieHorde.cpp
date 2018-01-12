/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:28:28 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 15:48:18 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <string>
#include <iostream>
#include "ZombieHorde.hpp"

#define	SIZE(x)	(sizeof(x)/sizeof(x[0]))

std::string	randomName() {
	int			index;
	std::string	zombiename[] = {"Plump Zombie",
								"Runner",
								"Venom Zombie",
								"Creeper",
								"Digger",
								"Gusher"};

	index = rand() % SIZE(zombiename);
	return zombiename[index];
}

ZombieHorde::ZombieHorde(int N) : _nbZombies(N), _type("walking dead") {
	int	i;

	std::cout << "A horde appears at the horizon !!" << std::endl;
	this->_horde = new Zombie[N];
	srand(time(NULL));
	for (i = 0; i < N; ++i) {
		this->_horde[i].setName(randomName());
		this->_horde[i].setType(this->_type);
		this->_horde[i].announce();
	}
	return;
}

ZombieHorde::~ZombieHorde() {
	delete [] this->_horde;
	std::cout << "All the horde has been destroyed." << std::endl;
	return;
}
