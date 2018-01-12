/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:31:03 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 11:13:15 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

class Pony {

public:

	std::string name;
	std::string color;
	std::string specialpower;

	Pony(std::string name, std::string color);
	~Pony();

	void	Whinny() const;
	void	Power() const;
};

#endif
