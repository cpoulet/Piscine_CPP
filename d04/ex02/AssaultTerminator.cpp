#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() : ISpaceMarine() {
    std::cout << "* teleport from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) : ISpaceMarine() {
    *this = src;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I'll be back ..." << std::endl;
}

AssaultTerminator &	AssaultTerminator::operator=(AssaultTerminator const & src) {
    (void) src;
    return *this;
}

ISpaceMarine*   AssaultTerminator::clone() const {
    ISpaceMarine*   clone = new AssaultTerminator();
    return clone;
}

void	AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void	AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const {
    std::cout << "* attacks with chainfists *" << std::endl;
}
