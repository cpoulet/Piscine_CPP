/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:31:03 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 12:54:57 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent {

public:

	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie*	newZombie(std::string name);
	Zombie*	randomChump();

private:

	std::string	_type;
};

#endif
