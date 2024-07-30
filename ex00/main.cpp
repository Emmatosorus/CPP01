#include "Zombie.h"

int	main(void)
{
	std::string name1 = "Steve";
	std::string name2 = "Bob";
	Zombie *allocated  = newZombie(name1);

	allocated->announce();
	delete allocated;
	allocated->randomChump(name2);

	return (0);
}