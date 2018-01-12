#include "Victim.hpp"

Victim::Victim(std::string const name) : _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src) {
	*this = src;
}

Victim::~Victim() {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

Victim &	Victim::operator=(Victim const & src) {
	this->_name = src._name;
	return *this;
}

std::string		Victim::getName() const {
	return this->_name;
}

void			Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Victim const & rhs) {
	o << "I am " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
