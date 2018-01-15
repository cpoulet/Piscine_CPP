#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form("ShrubberyCreationForm", 145, 137), _target(src.getTarget()) {
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    return;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src) {
    (void)src;
	return *this;
}

std::string	const   ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void                ShrubberyCreationForm::execute(Bureaucrat const & b) const {
    if (!this->getSigned())
        throw NotSignedException();
    else if (b.getGrade() > this->getexGrade())
        throw GradeTooLowException();
    else {
        std::stringstream   s;
        s << this->_target << "_shrubbery";
        std::ofstream       file(s.str());
        file << TREE;
    }
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & rhs) {
	o << rhs.getName() << " is" << (rhs.getSigned() ? "" : " not") << " signed ! Its signed grade is " << rhs.getsiGrade() << " and its execute grade is " << rhs.getexGrade() << std::endl;
	return o;
}
