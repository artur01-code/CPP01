#include "sed.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid amount of arguments!\n Please enter a filename and two strings." << std::endl;
		return (1);
	}
	std::cout << "Values: " << argv[1] << " " << argv[2] << std::endl;

	std::ofstream file;
	file.open(argv[1]);
	file.close();
	
	return (0);		
}