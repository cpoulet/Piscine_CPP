#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
	FragTrap	bob("BOB-C37");
	NinjaTrap	ninja("ANT-W0T");

	srand(time(NULL));
	std::cout << bob.getName() << std::endl;
	std::cout << ninja.getName() << std::endl;
}
