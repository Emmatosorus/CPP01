#include "Zombie.h"

void Zombie::randomChump( std::string name )
{
	Zombie newZombie;

	newZombie.name = name;
	newZombie.annouce();
}
