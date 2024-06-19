#include "HumanB.h"

HumanB::HumanB( void )
{
}

HumanB::HumanB( std::string new_name )
{
	setName( new_name );
}

HumanB::~HumanB()
{
}

void	HumanB::setName( std::string new_name )
{
	name = new_name;
}

void	HumanB::setWeapon(Weapon& new_weapon )
{
	this->weapon = &new_weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

