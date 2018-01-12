/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 11:42:58 by cpoulet           #+#    #+#             */
/*   Updated: 2018/01/08 13:47:43 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact {

public:

	std::string fname;
	std::string lname;
	std::string nname;
	std::string login;
	std::string paddress;
	std::string eaddress;
	std::string pnumber;
	std::string birth;
	std::string meal;
	std::string color;
	std::string secret;

	Contact( void );
	~Contact( void );

};

#endif
