/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 11:00:30 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/10 12:18:57 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed {

public:

	Fixed();
	Fixed(Fixed const & src);
	~Fixed();

	int			getRawBits() const;
	void		setRawBits(int const raw);
	Fixed &		operator=(Fixed const & rhs);

private:

	int					_raw;
	static const int	_fix = 8;

};

#endif
