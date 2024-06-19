#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB {

  public :

  		HumanB( void );
  		explicit HumanB( std::string new_name );
  		~HumanB();

		void	attack( void );
  		void	setName( std::string new_name );
  		void	setWeapon( Weapon& new_weapon );

  private :

  		std::string name;
  		Weapon		*weapon;
};

#endif
