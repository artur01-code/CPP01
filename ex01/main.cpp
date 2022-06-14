#include "Zombie.hpp"

int main()
{
	int n = 5;

	std::cout << "\033[90m\n-----------------------------------\n\033[90m [DESTRUCTOR] \033[33m[ACTIONS] \033[32m[NAMES]\033[90m\n-----------------------------------\n\033[0m" << std::endl;

	Zombie Peter;
	std::cout << "\033[33m Object got created" << std::endl;
	Zombie *Steve = Peter.zombieHorde(n, "Alex");
	for (int i = 0; i < n; i++)
	{
		Steve[1].announce();
	}
	delete[] Steve;
}