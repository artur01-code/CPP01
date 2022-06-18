#include "sed.hpp"

int main(int argc, char **argv)
{
	std::fstream in_file;
	std::ofstream out_file;
	std::string line;
	std::string filename;

	/*catching the input*/
	if (argc != 4)
	{
		std::cout << "Invalid amount of arguments!\n Please enter a filename and two strings." << std::endl;
		return (1);
	}
	std::cout << "Values: " << argv[1] << " " << argv[2] << " " << argv[3] << std::endl;

	/*opening the file*/
	filename = (std::string)argv[1] + (std::string)".replace";
	in_file.open(argv[1]);
	out_file.open(filename);
	if (!in_file || !out_file)
	{
		std::cerr << "Problem opening file" << std::endl;
		return (1);
	}
	/*replace and write to the file*/
	while (in_file >> line)
	{
		if (line == argv[2])
			line = argv[3];
		//write it into a file -> file.replace
		out_file << line << " ";
		std::cout << line << " ";
	}
	std::cout << std::endl;
	in_file.close();
	out_file.close();
	
	return (0);		
}