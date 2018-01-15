#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include "Form.hpp"
# include "Bureaucrat.hpp"

# define TREE    "          # #### ####				\n"\
                 "        ### \\/#|### |/####		\n"\
                 "       ##\\/#/ \\||/##/_/##/_#	\n"\
                 "     ###  \\/###|/ \\/ # ###		\n"\
                 "   ##_\\_#\\_\\## | #/###_/_####	\n"\
                 "  ## #### # \\ #| /  #### ##/##	\n"\
                 "   __#_--###`  |{,###---###-~		\n"\
                 "             \\ }{				\n"\
                 "              }}{					\n"\
                 "              }}{					\n"\
                 "              {{}					\n"\
                 "        , -=-~{ .-^- _			\n"\
                 "              `}					\n"

class Bureaucrat;

class ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm(std::string const target);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const &);
	~ShrubberyCreationForm();

    std::string const   getTarget() const;
    void                execute(Bureaucrat const &) const;

private:

	ShrubberyCreationForm();
    
    std::string const   _target;
	
};

std::ostream &	operator<<(std::ostream &, ShrubberyCreationForm const &);

#endif
