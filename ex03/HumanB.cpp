#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	_name(name),
	_WeaponA(type)
{}

HumanB::~HumanB(void)
{

};

void HumanB::attack(void)
{
	std::cout << get_name() << " attacks with their " << this->_WeaponA.get_type() << std::endl;
};