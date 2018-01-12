#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	FragTrap	bob("BOB-C37");
	FragTrap	tom("TOM-G82");
	FragTrap	toto("TOTO-95P");
	ScavTrap	sam("SAM-1R5");
	ScavTrap	jesus("JESUS-CD8");

	srand(time(NULL));
	bob.rangeAttack(tom.getName());
	tom.takeDamage(20);
	bob.rangeAttack(tom.getName());
	tom.takeDamage(20);
	bob.meleeAttack(tom.getName());
	tom.takeDamage(30);
	toto.rangeAttack(tom.getName());
	tom.takeDamage(20);
	toto.meleeAttack(tom.getName());
	tom.takeDamage(30);
	sam.meleeAttack(tom.getName());
	tom.takeDamage(20);
	tom.beRepaired(0);
	tom.beRepaired(1);
	tom.beRepaired(41);
	tom.beRepaired(150);
	tom.vaulthunter_dot_exe(bob.getName());
	tom.vaulthunter_dot_exe(bob.getName());
	tom.vaulthunter_dot_exe(bob.getName());
	tom.vaulthunter_dot_exe(bob.getName());
	tom.vaulthunter_dot_exe(bob.getName());
	toto.vaulthunter_dot_exe(bob.getName());
	toto.vaulthunter_dot_exe(bob.getName());
	sam.challengeNewcomer(bob.getName());
	sam.challengeNewcomer(bob.getName());
	jesus.challengeNewcomer(bob.getName());
	jesus.challengeNewcomer(bob.getName());
	jesus.challengeNewcomer(bob.getName());
}
