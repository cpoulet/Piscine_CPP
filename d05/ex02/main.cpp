#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>

int main() {
    try {
        Bureaucrat  bob("Bob", 1);
        Bureaucrat  tom("Tom", 7);
        Bureaucrat  sam("Sam", 150);
        Form        fB("Form 28B", 1, 1);
        Form        fC("Form 28C", 6, 6);
        ShrubberyCreationForm   SF("home");

        std::cout << SF;
        bob.signForm(SF);
        bob.executeForm(SF);
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
        return -1;
    }
    return 0;
}
