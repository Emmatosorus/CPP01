#include "Harl.h"

Harl::Harl() {
}

Harl::~Harl() {
}

void	Harl::complain(std::string level)
{
	void	(Harl::*func)(void);

	int			i;
	std::string	list[4] = {"debug", "info", "warning", "error"};
	for (i = 0; i < 4; i++)
	{
		if (level.compare(list[i]) == 0)
			break ;
	}
	if (i == 4)
		return ;
	switch (i) {
		case 0 :
			func = &Harl::debug;
			break ;
		case 1 :
			func = &Harl::info;
			break ;
		case 2 :
			func = &Harl::warning;
			break ;
		case 3 :
			func = &Harl::error;
			break ;
	}
	(this->*func)();
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-special-ketchup burger."
	<< " I really do!\"" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t "
	<< "be asking for more!\"" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< "I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}