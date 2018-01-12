/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 09:12:34 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/08 10:51:10 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *toupper(char *s)
{
	size_t	i;

	for (i = 0; i < strlen(s); ++i)
		s[i] = ('a' <= s[i] && s[i] <= 'z') ? s[i] ^ 0x20 : s[i];
	return s;
}

int main(int ac, char **av)
{
	int		i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for(i = 1; i < ac; ++i)
			std::cout << toupper(*(av + i));
		std::cout << std::endl;
	}
	return 0;
}
