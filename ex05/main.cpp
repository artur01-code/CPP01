#include "Harl.hpp"

int main()
{
	Harl object;

	std::cout << "\033[33mDEBUG:\033[0m" << std::endl;
	object.complain("DEBUG");
	std::cout << "\033[33mINFO:\033[0m" << std::endl;
	object.complain("INFO");
	std::cout << "\033[33mWARNING:\033[0m" << std::endl;
	object.complain("WARNING");
	std::cout << "\033[33mERROR:\033[0m" << std::endl;
	object.complain("ERROR");
}