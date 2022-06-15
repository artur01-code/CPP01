#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{

	std::cout << "\033[90m\n-----------------------------------\n\033[90m [DESTRUCTOR] \033[33m[ACTIONS] \033[32m[NAMES]\033[90m\n-----------------------------------\n\033[0m" << std::endl;

	{
	Weapon club = Weapon("crude spiked club");
	std::cout << "\033[33mWeapon got created\033[0m" << std::endl;
	HumanA bob("Bob", club);
	std::cout << "\033[33mHumanA got created\033[0m" << std::endl;
	bob.attack();
	club.set_type("some other type of club");
	std::cout << "\033[33mWeapon type got changed\033[0m" << std::endl;
	bob.attack();
	}
	std::cout << std::endl << "\033[33m******************TEST 2*****************" << std::endl << std::endl; 
	{
	Weapon club = Weapon("crude spiked club");
	std::cout << "\033[33mWeapon got created\033[0m" << std::endl;
	HumanB jim("Jim");
	std::cout << "\033[33mHumanB got created\033[0m" << std::endl;
	jim.set_Weapon(club);
	std::cout << "\033[33mJims weapon got set to Jim\033[0m" << std::endl;
	jim.attack();
	if (club.set_type("some other type of club"))
		std::cout << "\033[33mWeapon type got changed\033[0m" << std::endl;
	jim.attack();
	}
}
