#include "Zombie.h"

int	main(void)
{
	{
		Zombie	*allocated  = newZombie("Steve");
		allocated->announce();
		delete allocated;
	}
	std::cout << std::endl;
	{
		randomChump("Bob");
	}
	std::cout << std::endl;
	{
		Zombie	Mike;
		Mike.announce();
		Mike.setName("Mike");
		Mike.announce();
	}
	std::cout << std::endl;
	{
		Zombie	Oscar;
	}
	return (0);
}