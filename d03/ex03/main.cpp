#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
	FragTrap	bob("BOB-C37");
	FragTrap	tom("TOM-G82");
	FragTrap	toto("TOTO-95P");
	ScavTrap	sam("SAM-1R5");
	ScavTrap	jesus("JESUS-CD8");
	ScavTrap	judas(jesus);
	NinjaTrap	ninja("ANT-W0T");

	srand(time(NULL));
	std::cout << jesus.getName() << std::endl;
	std::cout << judas.getName() << std::endl;
	bob.rangeAttack(tom.getName());
	tom.takeDamage(20);
	bob.rangeAttack(tom.getName());
	tom.takeDamage(20);
	tom.beRepaired(41);
	tom.vaulthunter_dot_exe(bob.getName());
	tom.vaulthunter_dot_exe(bob.getName());
	tom.vaulthunter_dot_exe(bob.getName());
	sam.challengeNewcomer(bob.getName());
	sam.challengeNewcomer(bob.getName());
	sam.challengeNewcomer(bob.getName());
	ninja.ninjaShoebox(bob);
	ninja.ninjaShoebox(sam);
	ninja.ninjaShoebox(ninja);
}
