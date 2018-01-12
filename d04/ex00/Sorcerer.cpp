#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const name, std::string const title) : _name(name), _title(title) {
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) {
	*this = src;
}

Sorcerer::~Sorcerer() {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const & src) {
	this->_name = src._name;
	this->_title = src._title;
	return *this;
}

std::string		Sorcerer::getName() const {
	return this->_name;
}

std::string		Sorcerer::getTitle() const {
	return this->_title;
}

void			Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const & rhs) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
