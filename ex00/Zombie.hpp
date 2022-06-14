#include <iostream>

class Zombie {
	public:
	//constructor
	Zombie();
	Zombie(std::string name);
	~Zombie();
	
	//attributes
	private:
	std::string _name;

	//methods
	public:
	std::string get_name() {return (_name);}
	bool set_name(std::string new_name) {_name = new_name; return (true);}
	void announce (void);
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
};