#ifndef _HARL_HPP_
# define _HARL_HPP_

#include <iostream>
#include <string>

class Harl
{
	//Constructor
	public:
		typedef void (Harl::*getFunc)(void);
		Harl();
		~Harl();

	//attributes
	private:

	//methods
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
	public:
		void complain(std::string level);
};

#endif
