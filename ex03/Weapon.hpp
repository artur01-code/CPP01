#ifndef _WEAPON_H_
# define _WEAPON_H_
# include <iostream>

class Weapon 
{
	//Constructor
	public:
	Weapon(std::string _type);
	~Weapon();

	//attributes
	private:
	std::string _type;

	//methods
	public:
	std::string get_type() {return (_type);}
	bool set_type(std::string new_type) {_type = new_type; return (true);}
};

#endif