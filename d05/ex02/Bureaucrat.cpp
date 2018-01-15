#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, unsigned int const grade) : _name(name) {
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    this->_grade = grade;
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name) {
	*this = src;
}

Bureaucrat::~Bureaucrat() {
    return;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & src) {
	this->_grade = src._grade;
	return *this;
}

std::string	const   Bureaucrat::getName() const {
	return this->_name;
}

unsigned int	    Bureaucrat::getGrade() const {
	return this->_grade;
}

void			Bureaucrat::promote() {
    if (this->_grade == 1)
        throw GradeTooHighException();
    this->_grade -= 1;
}

void			Bureaucrat::demote() {
    if (this->_grade == 150)
        throw GradeTooLowException();
    this->_grade += 1;
}

void            Bureaucrat::signForm(Form & f) { 
    try {
        f.beSigned(*this);
        std::cout << this->_name << " signs " << f.getName() << std::endl;
    } catch (Form::GradeTooLowException & e) {
        std::cout << this->_name << " cannot sign " << f.getName() << " because his grade is to low." << std::endl;
    }
}

void            Bureaucrat::executeForm(Form & f) { 
    try {
        f.execute(*this);
        std::cout << this->_name << " executes " << f.getName() << std::endl;
    } catch (Form::GradeTooLowException & e) {
        std::cout << this->_name << " cannot execute " << f.getName() << " because his grade is to low." << std::endl;
    } catch (Form::NotSignedException & e) {
        std::cout << this->_name << " cannot execute " << f.getName() << " because the form is not signed." << std::endl;
    } catch (std::exception & e) {
        std::cout << this->_name << " cannot execute " << f.getName() << std::endl;
    }
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
