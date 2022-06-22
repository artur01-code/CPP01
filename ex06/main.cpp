#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {return 1;}
	Harl Steve;
	std::string level = argv[1];
	if (!level.compare("DEBUG") || !level.compare("INFO") || !level.compare("WARNING") || !level.compare("ERROR")){
		Steve.complain(level);
	}
	else{
		std::cout << "[  Probably complaining about insignificant problems ]" << std::endl;
	}
	return 0;
}