#include "Zombie.h"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << name << " has died.." << std::endl;
}

void	Zombie::set_name(const std::string & name)
{
	this->name = name;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
