#ifndef _HARL_HPP_
# define _HARL_HPP_

#include <iostream>

class Harl
{
	//Constructor
	public:
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

#endif;
