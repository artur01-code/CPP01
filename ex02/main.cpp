#include "iostream"

int main()
{
	std::string input = "HI THIS IS BRAIN";
	std::string *stringPTR = &input;
	std::string &stringREF = input;

	std::cout << "\033[90mmemory address of the string:		\033[0m" << &input << std::endl;
	std::cout << "\033[90mmemory address help by stringPTR:	\033[0m" << &stringPTR << std::endl;
	std::cout << "\033[90mmemory address help by stringREF:	\033[0m" << &stringREF << std::endl << std::endl;

	std::cout << "\033[90mvalue of the string:		\033[0m" << input << std::endl;
	std::cout << "\033[90mvalue pointed to stringPTR:	\033[0m" << *stringPTR << std::endl;
	std::cout << "\033[90mvalue pointed to stringREF:	\033[0m" << stringREF << std::endl << std::endl;
}