#include <HumanA.hpp>

HumanA::HumanA(std::string _name, Weapon WeaponA)
{
	set_name(_name);
	set_weapon(WeaponA);
};

HumanA::~HumanA()
{

};

void HumanA::attack()
{
	std::cout << get_name() << " attacks with their ";
	std::cout << get_weapon().get_type() << std::endl;
};