#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	FragTrap	bob("BOB-C37");
	FragTrap	tom("TOM-G82");
	FragTrap	toto("TOTO-95P");
	ScavTrap	sam("SAM-1R5");
	ScavTrap	jesus("JESUS-CD8");
	ScavTrap	test(jesus);

	srand(time(NULL));
	std::cout << jesus.getName() << std::endl;
	std::cout << test.getName() << std::endl;
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
}
