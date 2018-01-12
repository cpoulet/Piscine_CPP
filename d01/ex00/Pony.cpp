/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:28:28 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 11:13:04 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony(std::string name, std::string color) : name(name), color(color), specialpower("") {
	std::cout << this->name << " is born." << std::endl;
	return;
}

Pony::~Pony() {
	std::cout << this->name << " just died atrociously." << std::endl;
	return;
}

void	Pony::Whinny() const {
	std::cout << "Hiiiiiii.. Hiiiiiii... Brrrrr..  Hiii.." << std::endl;
	return;
}

void	Pony::Power() const {
	if (this->specialpower != "")
		std::cout << "My special power is : " << this->specialpower << std::endl;
	else
		std::cout << "I got no power :'(" << std::endl;
	return;
}
