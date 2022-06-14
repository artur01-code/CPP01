#include "Weapon.hpp"
#include "HumanA.hpp"
//#include "HumanB.hpp"

int main()
{

	std::cout << "\033[90m\n-----------------------------------\n\033[90m [DESTRUCTOR] \033[33m[ACTIONS] \033[32m[NAMES]\033[90m\n-----------------------------------\n\033[0m" << std::endl;

	Weapon club = Weapon("crude spiked club");
	std::cout << "\033[33mWeapon got created" << std::endl;
	HumanA bob("Bob", club);
	std::cout << "\033[33mHumanA got created" << std::endl;
	bob.attack();
	club.set_type("some other type of club");
	bob.attack();

	//**********TEST 2************************
	// Weapon club = Weapon("crude spiked club");
	// HumanB jim("Jim");
	// jim.setWeapon(club);
	// jim.attack();
	// club.set_type("some other type of club");
	// jim.attack();
}
