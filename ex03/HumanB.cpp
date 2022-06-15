#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	_name(name),
	_WeaponB(NULL)
{}

HumanB::~HumanB(void)
{

};

void HumanB::attack(void)
{
	if (this->_WeaponB)
		std::cout << get_name() << " attacks with their " << this->_WeaponB->get_type() << std::endl;
	else
		std::cout << "Would be better if you start running" << std::endl;
};