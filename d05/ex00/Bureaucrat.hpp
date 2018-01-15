#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>

class Bureaucrat {

public:

	Bureaucrat(std::string const name, unsigned int const grade);
	Bureaucrat(Bureaucrat const &);
	Bureaucrat &	operator=(Bureaucrat const &);
	~Bureaucrat();

	std::string const	getName() const;
	unsigned int        getGrade() const;
	void			    promote();
	void			    demote();

    class GradeTooHighException : public std::exception{
        public:
            virtual const char* what() const throw() {
                return ("The grade is too high !");
            }
    };

    class GradeTooLowException : public std::exception{
        public:
            virtual const char* what() const throw() {
                return ("The grade is too low !");
            }
    };

private:

	Bureaucrat();
	
	std::string const	_name;
	unsigned int	    _grade;

};

std::ostream &	operator<<(std::ostream &, Bureaucrat const &);

#endif
