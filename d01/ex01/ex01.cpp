/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 11:15:19 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 11:22:26 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");
	
	std::cout << *panthere << std::endl;
	delete panthere;
}
