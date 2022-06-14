#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_
# include "Weapon.hpp"

//is suppost to have a weapon by default
class HumanA
{
	//Constructor
	public:
	HumanA(std::string _name, Weapon WeaponA);
	~HumanA();

	//attributes
	private:
	std::string _name;
	Weapon _WeaponA;

	//methods
	public:
	std::string get_name() {return (_name);}
	bool set_name(std::string new_name) {_name = new_name; return (true);}
	Weapon get_weapon() {return (_WeaponA);}
	bool set_weapon(Weapon new_WeaponA) {_WeaponA = new_WeaponA; return (true);}
	//bool set_weapon_type(std::string new_type) {_type = new_type; return (true);}
	void attack();
};

#endif