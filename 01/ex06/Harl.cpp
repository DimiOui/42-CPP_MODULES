#include "Harl.hpp"

Harl::Harl()
{
	lvl[0].cmd = "DEBUG";
	lvl[0].ptr = &Harl::debug;
	lvl[1].cmd = "INFO";
	lvl[1].ptr = &Harl::info;
	lvl[2].cmd = "WARNING";
	lvl[2].ptr = &Harl::warning;
	lvl[3].cmd = "ERROR";
	lvl[3].ptr = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	bool	check = false;

	for (int i = 0; i < 4; i++)
	{
		if (check || lvl[i].cmd == level)
		{
			(this->*(lvl[i].ptr))();
			check = true;
		}
	}
	if (check == false)
		defaultMsg();
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
		"pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n"
		"You didn't put enough bacon in my burger! If you did, I wouldn't"
		" be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n"
		"I've been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now. \n";
}

void	Harl::defaultMsg()
{
	std::cout << "[ Probably complaining about insignificant problems ] \n";
}
