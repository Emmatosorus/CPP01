#include "Zombie.h"

void randomChump( std::string name )
{
	Zombie newZombie;

	newZombie.setName(name);
	newZombie.announce();
}
