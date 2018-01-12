/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:00:30 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/10 14:20:17 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {

public:

	Fixed();
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const & src);
	~Fixed();

	int			getRawBits() const;
	void		setRawBits(int const raw);
	Fixed &		operator=(Fixed const & rhs);

	int			toInt() const;
	float		toFloat() const;

private:

	int					_raw;
	static const int	_fix = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
