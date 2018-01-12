/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3615_pinkshow.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 10:56:37 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 10:23:31 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.class.hpp"

void		width(std::string s) {
	if (s.length() > 10) 
		std::cout << s.replace(9, 1, ".").substr(0,10);
	else
		std::cout << std::setw(10) << s;
}

void		show(Contact phonebook[8], int end) {
	int k;

	for (k = 1; k <= end; ++k) {
		std::cout << std::setw(10) << k << '|';
		width(phonebook[k - 1].fname);
		std::cout << '|';
		width(phonebook[k - 1].lname);
		std::cout << '|';
		width(phonebook[k - 1].nname);
		std::cout << std::endl;
	}
}

void		show_index(Contact contact) {
	std::cout << contact.fname << std::endl;
	std::cout << contact.lname << std::endl;
	std::cout << contact.nname << std::endl;
	std::cout << contact.login << std::endl;
	std::cout << contact.paddress << std::endl;
	std::cout << contact.eaddress << std::endl;
	std::cout << contact.pnumber << std::endl;
	std::cout << contact.birth << std::endl;
	std::cout << contact.meal << std::endl;
	std::cout << contact.color << std::endl;
	std::cout << contact.secret << std::endl;
}

void		search(Contact phonebook[8], int i) {
	int index = 0;

	show(phonebook, i);
	while (!(1 <= index && index <= i)) {
		std::cout << "Enter the choosed index: ";
		std::cin >> index;
		if (!std::cin)
			exit(0);
	}
	show_index(phonebook[index - 1]);
}

int			add_contact(Contact phonebook[8], int i) {
	std::string	input;

	std::cout << "Enter the first name: ";
	std::cin >> phonebook[i].fname;
	std::cout << "Enter the last name: ";
	std::cin >> phonebook[i].lname;
	std::cout << "Enter the nickname: ";
	std::cin >> phonebook[i].nname;
	std::cout << "Enter the login: ";
	std::cin >> phonebook[i].login;
	std::cout << "Enter the postal address: ";
	std::getline(std::cin, input);
	phonebook[i].paddress = input;
	std::cout << "Enter the email address: ";
	std::cin >> phonebook[i].eaddress;
	std::cout << "Enter the phone number: ";
	std::cin >> phonebook[i].pnumber;
	std::cout << "Enter the birthday date: ";
	std::cin >> phonebook[i].birth;
	std::cout << "Enter the favorite meal: ";
	std::cin >> phonebook[i].meal;
	std::cout << "Enter the underwear color: ";
	std::cin >> phonebook[i].color;
	std::cout << "Enter the darkest secret: ";
	std::cin >> phonebook[i].secret;
	if (!std::cin)
		exit(0);
	return 1;
}

int			main() {
	std::string	input;
	bool		exit = false;
	int			i = 0;
	Contact 	phonebook[8];

	while (!exit)
	{
		std::cout << "Enter a valid command:\n> ";
		std::cin >> input;
		if (input == "ADD")
			if (i > 7)
				std::cout << "There is already 8 contacts\n";
			else
				i += add_contact(phonebook, i);
		else if (input == "SEARCH")
			if (i > 0)
				search(phonebook, i);
			else
				std::cout << "There is still no contacts\n";
		else if (input == "EXIT")
			exit = true;
		else if (!std::cin)
			exit = true;
	}
	return 0;
}
