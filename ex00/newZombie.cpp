#include "Zombie.h"

Zombie *newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;

	newZombie->set_name(name);
	return (newZombie);
}