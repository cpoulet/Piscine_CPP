/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 15:50:56 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 15:56:22 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string 	s = "HI THIS IS BRAIN";
	std::string&	ref = s;
	std::string*	ptr;

	ptr = &s;
	ref = s;
	std::cout << "ptr : " << *ptr << std::endl;
	std::cout << "ref : " << ref << std::endl;
}
