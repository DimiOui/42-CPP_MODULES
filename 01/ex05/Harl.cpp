#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complain[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string complainLevels[] = {
		"level 1",
		"level 2",
		"level 3",
		"level 4"
	};

	for (int i = 0; i < 4; i++)
	{
		void (Harl::*complainSelect)() = complain[i];
		if (level == complainLevels[i])
			(this->*complainSelect)();
	}
}

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
		"pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money."
		"You didn't put enough bacon in my burger! If you did, I wouldn't"
		" be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free."
		"I've been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now. \n";
}
