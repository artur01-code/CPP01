#include "Zombie.hpp"

int main()
{
	std::cout << "\033[90m\n-----------------------------------\n\033[90m [DESTRUCTOR] \033[33m[ACTIONS] \033[32m[NAMES]\033[90m\n-----------------------------------\n\033[0m" << std::endl;

	Zombie Peter;
	std::cout << "\033[33m Object got created" << std::endl;
	Peter.set_name("Peter");
	std::cout << "\033[33m Object got named" << Peter.get_name() << std::endl;
	Peter.announce();

	Zombie *Steve = Peter.newZombie("Steve");
	std::cout << "\033[33m Object got created" << std::endl;
	Steve->announce();
	delete Steve;
	std::cout << "\033[33m Object got deleted" << std::endl;

	Peter.randomChump("Alex");
	std::cout << "\033[33m Object got created, named and announced" << std::endl;
}
