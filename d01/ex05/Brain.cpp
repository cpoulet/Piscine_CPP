/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:01:08 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 16:42:18 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain() : _self(this) {
	std::cout << "Brain ON." << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain OFF." << std::endl;
}

std::string	Brain::identify() const {
	std::stringstream s;
	s << this->_self;
	return s.str();
}
