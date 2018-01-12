/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 18:34:28 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/09 19:44:18 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string	sed(std::string const original, std::string const sub, std::string const replace) {
	std::stringstream	s;
	std::size_t			pos = -1;
	std::size_t			old = 0;

	while ((pos = original.find(sub, pos + 1)) != std::string::npos) {
		s << original.substr(old, pos - old) << replace;
		old = pos + sub.length();
	}
	s << original.substr(old, pos);
	return s.str();
}

int 		main(int ac, char **av) {
	
	std::stringstream	s;
	std::stringstream	text;

	if (ac != 4) {
		std::cout << "Wrong nb of arguments" << std::endl;
		return 0;
	}
	std::ifstream	ifs(av[1]);
	if (!ifs) {
		std::cerr << "Unable to open given file" << std::endl;
		ifs.close();
		exit(1);
	}
	text << ifs.rdbuf();
	ifs.close();
	s << av[1] << ".replace";
	std::ofstream	ofs(s.str());
	if (!ofs) {
		std::cerr << "Unable to save file" << std::endl;
		ofs.close();
		exit(1);
	}
	ofs << sed(text.str(), av[2], av[3]);
	ofs.close();
	return 0;
}
