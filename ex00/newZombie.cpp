#include "Zombie.h"

Zombie *newZombie(std::string name)
{
	Zombie *newZombie = new Zombie;

	newZombie->setName(name);
	return (newZombie);
}