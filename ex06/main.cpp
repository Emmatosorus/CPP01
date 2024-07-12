#include "Harl.h"

int main(int ac, char **av)
{
	Harl		bot1;
	std::string	str;

	if (ac != 2)
	{
		std::cout << "Incorrect amount of arguments ;-;" << std::endl;
		return (1);
	}
	bot1.complain(av[1]);
	return (0);
}