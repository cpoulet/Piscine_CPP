#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

	Form(std::string const name, unsigned int const siGrade, unsigned int const exGrade);
	Form(Form const &);
	Form &	operator=(Form const &);
	~Form();

	std::string const	getName() const;
	unsigned int        getsiGrade() const;
	unsigned int        getexGrade() const;
	bool                getSigned() const;
    
    void                beSigned(Bureaucrat const &);
    void                execute(Bureaucrat const &) const;


    class GradeTooHighException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return ("The grade is too high !");
            }
    };

    class GradeTooLowException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return ("The grade is too low !");
            }
    };

    class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return ("The form is not signed !");
            }
    };

private:

	Form();
	
	std::string const   _name;
	bool                _signed;
    unsigned int const  _siGrade;
    unsigned int const  _exGrade;

};

std::ostream &	operator<<(std::ostream &, Form const &);

#endif
