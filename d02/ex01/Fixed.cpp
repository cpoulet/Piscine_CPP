/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:02:31 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/10 15:31:57 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) {
	std::cout << "Int constructor called" << std::endl;
	this->_raw = n << this->_fix;
}

Fixed::Fixed(float const f) {
	std::cout << "Float constructor called" << std::endl;
	this->_raw = roundf(f * pow(2, this->_fix));
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int			Fixed::getRawBits() const {
	return this->_raw;
}

void		Fixed::setRawBits(int const raw) {
	this->_raw = raw;
}

int			Fixed::toInt() const {
	return this->_raw >> this->_fix;
}

float		Fixed::toFloat() const {
	return (float)this->_raw * pow(2, -this->_fix);
}

Fixed &		Fixed::operator=(Fixed const & rhs) {
	std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_raw = rhs.getRawBits();
	return *this;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}
