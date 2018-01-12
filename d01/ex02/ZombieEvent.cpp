/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:28:28 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 13:35:09 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

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

ZombieEvent::ZombieEvent() : _type("lurker") {
	std::cout << "Party is startiiiiing !!" << std::endl;
	srand(time(NULL));
	return;
}

ZombieEvent::~ZombieEvent() {
	std::cout << "End of balls." << std::endl;
	return;
}

void	ZombieEvent::setZombieType(std::string type) {
	this->_type = type;
	std::cout << "A new type has been defined : " << type << std::endl;
}

Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie*	zombie = new Zombie(name, this->_type);
	return zombie;
}

Zombie*	ZombieEvent::randomChump() {
	Zombie*	zombie = new Zombie(randomName(), this->_type);
	return zombie;
}
