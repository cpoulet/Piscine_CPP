/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 16:16:03 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 17:28:29 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {

	std::string		_name;
	Weapon&			_weapon;

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void	attack() const;
};

#endif
