/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:02:31 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/10 12:19:54 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
}

int			Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void		Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}

Fixed &		Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_raw = rhs.getRawBits();
	return *this;
}
