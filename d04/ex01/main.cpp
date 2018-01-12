#include "PlasmaRifle.hpp"
#include "Character.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main() {
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* a = new SuperMutant();
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
    zaz->recoverAP();
	zaz->equip(pf);
	std::cout << *zaz;
	zaz->attack(a);
	zaz->attack(a);
	zaz->attack(a);
	std::cout << *zaz;
	zaz->attack(a);
	return 0;
}
