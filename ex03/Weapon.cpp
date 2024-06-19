#include "Weapon.h"

Weapon::Weapon( void )
{
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string new_type)
{
	this->type = new_type;
}