#include "HumanB.h"

HumanB::HumanB( void )
{
	weapon = NULL;
}

HumanB::HumanB( std::string new_name )
{
	setName( new_name );
	weapon = NULL;
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
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " doesn't have a weapon" << std::endl;
}

