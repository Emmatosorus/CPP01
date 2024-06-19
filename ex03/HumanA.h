#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA {

  public :

  		HumanA( std::string new_name , Weapon &weapon);
 		~HumanA();

  		void	attack( void );
  		void	setName( std::string new_name );

  private :

  		std::string	name;
  		Weapon		&weapon;
};

#endif
