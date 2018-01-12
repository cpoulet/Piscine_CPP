/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:02:31 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/10 17:42:17 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _raw(0) {
}

Fixed::Fixed(int const n) {
	this->_raw = n << this->_fix;
}

Fixed::Fixed(float const f) {
	this->_raw = roundf(f * pow(2, this->_fix));
}

Fixed::Fixed(Fixed const & src) {
	*this = src;
}

Fixed::~Fixed() {
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
	if (this != &rhs)
		this->_raw = rhs.getRawBits();
	return *this;
}

bool		Fixed::operator>(Fixed const & rhs) const {
	return this->toFloat() > rhs.toFloat();
}

bool		Fixed::operator<(Fixed const & rhs) const {
	return this->toFloat() < rhs.toFloat();
}

bool		Fixed::operator>=(Fixed const & rhs) const {
	return this->toFloat() >= rhs.toFloat();
}

bool		Fixed::operator<=(Fixed const & rhs) const {
	return this->toFloat() <= rhs.toFloat();
}

bool		Fixed::operator==(Fixed const & rhs) const {
	return this->toFloat() == rhs.toFloat();
}

bool		Fixed::operator!=(Fixed const & rhs) const {
	return this->toFloat() != rhs.toFloat();
}

Fixed		Fixed::operator+(Fixed const & rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed		Fixed::operator-(Fixed const & rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed		Fixed::operator*(Fixed const & rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed		Fixed::operator/(Fixed const & rhs) const {
	if (rhs.getRawBits() != 0)
		return Fixed(this->toFloat() / rhs.toFloat());
	std::cerr << "Floating point exception" << std::endl;
	exit(1);
}

Fixed &		Fixed::operator++() {
	this->_raw++;
	return *this;
}

Fixed		Fixed::operator++(int) {
	Fixed	tmp = *this;
	this->_raw++;
	return tmp;
}

Fixed &		Fixed::operator--() {
	this->_raw--;
	return *this;
}

Fixed		Fixed::operator--(int) {
	Fixed	tmp = *this;
	this->_raw--;
	return tmp;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

Fixed &			Fixed::min(Fixed & lhs, Fixed & rhs) {
	if (lhs > rhs)
		return rhs;
	return lhs;
}

Fixed &			Fixed::max(Fixed & lhs, Fixed & rhs) {
	if (lhs > rhs)
		return lhs;
	return rhs;
}

Fixed const &	Fixed::min(Fixed const & lhs, Fixed const & rhs) {
	if (lhs > rhs)
		return rhs;
	return lhs;
}

Fixed const &	Fixed::max(Fixed const & lhs, Fixed const & rhs) {
	if (lhs > rhs)
		return lhs;
	return rhs;
}
