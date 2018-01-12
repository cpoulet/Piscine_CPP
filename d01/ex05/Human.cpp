/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:15:42 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 17:02:42 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
	std::cout << "Human born." << std::endl;
}

Human::~Human() {
	std::cout << "Human dead." << std::endl;
}

const Brain&	Human::getBrain() const {
	return this->_brain;
}

std::string		Human::identify() const {
	return this->_brain.identify();
}
