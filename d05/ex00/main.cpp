#include <iostream>

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat	*bob;
	Bureaucrat	*jack;
	Bureaucrat	*rick;
	Bureaucrat	*john;

	try {
		bob = new Bureaucrat("Bob", 1);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		jack = new Bureaucrat("Jack", 150);
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		rick = new Bureaucrat("Rick", 0);	// Error.
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	if (rick == NULL) {
		std::cout << "Rick not created." << std::endl << std::endl;
	}

	try {
		john = new Bureaucrat("John", 151);	// Error.
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	if (john == NULL) {
		std::cout << "John not created." << std::endl;
	}

	std::cout << std::endl << *bob << *jack << std::endl;

	try {
		bob->promote();		// Error.
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << *bob << std::endl;;

	try {
		jack->demote();	// Error.
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << *jack << std::endl;

	bob->demote();
	jack->promote();

	std::cout << *bob << *jack << std::endl;

	delete bob;
	delete jack;
	if (rick) {
		std::cout << "delete rick" << std::endl;
		delete rick;
	}
	if (john) {
		std::cout << "delete john" << std::endl;
		delete john;
	}

	return (0);
}
