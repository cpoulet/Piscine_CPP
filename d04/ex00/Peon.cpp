#include "Peon.hpp"

Peon::Peon(std::string const name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) : Victim(src._name) {
	*this = src;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}

Peon &	Peon::operator=(Peon const & src) {
	this->_name = src._name;
	return *this;
}

void	Peon::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
