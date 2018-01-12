/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:28:28 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 15:44:13 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "A hand dig out of the dirty ground." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->name << " just return to his grave." << std::endl;
}

void	Zombie::setName(std::string name, bool verbose) {
	this->name = name;
	if (verbose)
		std::cout << "oh, it's " << this->name << "." << std::endl;
	return;
}

void	Zombie::setType(std::string type) {
	this->type = type;
	return;
}

void	Zombie::announce() const {
	std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return;
}
