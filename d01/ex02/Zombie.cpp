/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:28:28 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 12:20:11 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {
	std::cout << this->name << " dig out of the dirty ground." << std::endl;
	return;
}

Zombie::~Zombie() {
	std::cout << this->name << " just return to his grave." << std::endl;
	return;
}

void	Zombie::announce() const {
	std::cout << "<" << this->name << " (" << this->type << ")> " << "Braiiiiiiinnnssss..." << std::endl;
	return;
}
