#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	if (!name.empty())
		std::cout << name << " has died.." << std::endl;
	else
		std::cout << "<unamed>" << " has died.." << std::endl;
}

void Zombie::announce()
{
	if (!name.empty())
		std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << "<unamed>" << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}