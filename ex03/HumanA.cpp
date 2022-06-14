#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) :
	_name(name),
	_WeaponA(type)
{}

HumanA::~HumanA(void)
{

};

void HumanA::attack(void)
{
	std::cout << get_name() << " attacks with their " << this->_WeaponA.get_type() << std::endl;
};