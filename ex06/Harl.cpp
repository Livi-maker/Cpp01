#include "Harl.hpp"

Harl::Harl(void)
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

Harl::~Harl(void)
{}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int		Harl::find_level(std::string level)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}
	std::cout << "level not found\n";
	return (-1);
}

void	Harl::complain(std::string level)
{
	int	i;

	i = find_level(level);
	if (i != -1)
	{
		switch (i)
		{
			case 0:
				std:: cout << "[ DEBUG ]" << std::endl;
				debug();
				std::cout << "[ INFO ]" << std::endl;
				info();
				std::cout << "[ WARNING ]" << std::endl;
				warning();
				std::cout << "[ ERROR ]" << std::endl;
				error();
				break;
			case 1:
				std::cout << "[ INFO ]" << std::endl;
				info();
				std::cout << "[ WARNING ]" << std::endl;
				warning();
				std::cout << "[ ERROR ]" << std::endl;
				error();
				break;
			case 2:
				std::cout << "[ WARNING ]" << std::endl;
				warning();
				std::cout << "[ ERROR ]" << std::endl;
				error();
				break;
			case 3:
				std::cout << "[ ERROR ]" << std::endl;
				error();
				break;
		}
	}

}