#include "Zombie.h"

void Zombie::randomChump( std::string name )
{
	Zombie newZombie;

	newZombie.set_name(name);
	newZombie.announce();
}
