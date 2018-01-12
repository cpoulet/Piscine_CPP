#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
    ISpaceMarine*   bob = new TacticalMarine;
    ISpaceMarine*   jim = new AssaultTerminator;
//    ISpaceMarine*   toto = TacticalMarine(bob);

    bob->battleCry();
    jim->battleCry();
    bob->rangedAttack();
    jim->meleeAttack();
    delete bob;
    delete jim;
//    toto->battleCry();
    return 0;
}
