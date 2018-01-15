#include "Form.hpp"

Form::Form(std::string const name, unsigned int const siGrade, unsigned int const exGrade) : _name(name), _signed(false), _siGrade(siGrade), _exGrade(exGrade) {
    if (siGrade > 150 || exGrade > 150)
        throw GradeTooLowException();
    else if (siGrade < 1 || exGrade < 1)
        throw GradeTooHighException();
    return;
}

Form::Form(Form const & src) : _name(src._name), _siGrade(src._siGrade), _exGrade(src._exGrade) {
	*this = src;
}

Form::~Form() {
    return;
}

Form &	Form::operator=(Form const & src) {
    this->_signed = src._signed;
	return *this;
}

std::string	const   Form::getName() const {
	return this->_name;
}

unsigned int	    Form::getsiGrade() const {
	return this->_siGrade;
}

unsigned int	    Form::getexGrade() const {
	return this->_exGrade;
}

bool        	    Form::getSigned() const {
	return this->_signed;
}

void                Form::beSigned(Bureaucrat const & b) {
    if (b.getGrade() <= this->_siGrade)
        this->_signed = true;
    else
        throw GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs) {
	o << rhs.getName() << " is" << (rhs.getSigned() ? "" : " not") << " signed ! Its signed grade is " << rhs.getsiGrade() << " and its execute grade is " << rhs.getexGrade() << std::endl;
	return o;
}
