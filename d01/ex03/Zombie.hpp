/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:31:03 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 15:44:00 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie {

public:

	std::string name;
	std::string type;

	Zombie();
	~Zombie();

	void	setName(std::string name, bool verbose = false);
	void	setType(std::string type);
	void	announce() const;
};

#endif
