#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon {

  public:

  		Weapon( void );
  		explicit Weapon( std::string type );
  		~Weapon( void );

		const std::string&	getType() const;
		void				setType(std::string new_type);


  private:

  		std::string type;
};

#endif
