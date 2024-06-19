#include "HumanA.h"

HumanA::HumanA( std::string new_name , Weapon &weapon) : weapon(weapon)
{
	setName( new_name );
}

HumanA::~HumanA()
{
}

void	HumanA::setName( std::string new_name )
{
	name = new_name;
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}