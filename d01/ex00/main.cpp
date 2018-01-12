/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 10:27:51 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 11:14:04 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.hpp"

void	ponyOnTheStack() {
	Pony	p_t = Pony("Petit Tonnerre", "black & white");
	
	p_t.Whinny();
	p_t.Power();
}

void	ponyOnTheHeap() {
	Pony*	pegase = new Pony("Pegase", "white");
	
	pegase->Whinny();
	pegase->specialpower = "Flying";
	pegase->Power();
	delete pegase;
}

int	main() {
	std::cout << "Calling ponyOnTheStack" << std::endl;
	ponyOnTheStack();
	std::cout << "Leaved ponyOnTheStack" << std::endl << std::endl;
	std::cout << "Calling ponyOnTheHeap" << std::endl;
	ponyOnTheHeap();
	std::cout << "Leaved ponyOnTheHeap" << std::endl;
}
