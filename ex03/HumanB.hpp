#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_
#include "Weapon.hpp"

class HumanB
{
	//Constructor
	public:
	HumanB(std::string name);
	~HumanB(void);

	//attributes
	private:
	std::string _name;
	Weapon *_WeaponB;

	//methods
	public:
	std::string get_name() {return (_name);}
	bool set_name(std::string new_name) {_name = new_name; return (true);}
	bool set_Weapon(Weapon &type) {_WeaponB = &type; return (true);}
	void attack(void);
};

#endif