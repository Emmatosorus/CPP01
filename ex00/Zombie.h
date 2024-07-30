#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
  public:
  	Zombie();
	~Zombie();

  	void	announce( void );
	void	set_name(const std::string & name);
  	void	randomChump( std::string name );

  private:
  	std::string name;
};

Zombie*	newZombie( std::string name );

#endif //ZOMBIE_H
