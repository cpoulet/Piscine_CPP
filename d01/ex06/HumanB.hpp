/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:16:03 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 17:47:55 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {

	std::string		_name;
	Weapon*			_weapon;

public:

	HumanB(std::string name);
	~HumanB();

	void	attack() const;
	void	setWeapon(Weapon& weapon);
};

#endif
