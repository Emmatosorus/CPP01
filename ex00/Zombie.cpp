#include "Zombie.h"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << name << " has died due to lack of brains.." << std::endl;
}

void Zombie::annouce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
