#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_
#include "Weapon.hpp"

class HumanA
{
	//Constructor
	public:
	HumanA(std::string name, Weapon &type);
	~HumanA(void);

	//attributes
	private:
	std::string _name;
	Weapon &_WeaponA;

	//methods
	public:
	std::string get_name() {return (_name);}
	bool set_name(std::string new_name) {_name = new_name; return (true);}
	void attack(void);
};

#endif