#include "Template.hpp"

Template::Template() {
}

Template::Template(Template const & src) {
	*this = src;
}

Template::~Template() {
}

Template &	Template::operator=(Template const & src) {
	return *this;
}
