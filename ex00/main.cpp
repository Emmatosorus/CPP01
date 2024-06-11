#include "Zombie.h"

int	main(void)
{
	std::string name1 = "Steve";
	std::string name2 = "Bob";
	Zombie *allocated = NULL;

	allocated = (*allocated).newZombie(name1);
	allocated->annouce();
	delete allocated;
	allocated->randomChump(name2);

	return (0);
}