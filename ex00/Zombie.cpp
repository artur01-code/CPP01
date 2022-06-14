#include "Zombie.hpp"

Zombie::Zombie()
{

};

Zombie::Zombie(std::string name)
{
	this->set_name(name);
};

Zombie::~Zombie()
{
	std::cout << "\033[90m" << get_name() << std::endl;
};

void Zombie::announce(void)
{
	std::cout << "\033[32m" << get_name() << " : \033[0m BraiiiiiiinnnzzzZ..." << std::endl; 
};

Zombie* Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
};

void Zombie::randomChump(std::string name)
{
	Zombie random(name);
	random.announce();
}
