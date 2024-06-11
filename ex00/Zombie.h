#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
  public:
  	Zombie();
	~Zombie();

  	void	annouce( void );
  	Zombie*	newZombie( std::string name );
  	void	randomChump( std::string name );

  private:
  	std::string name;
};

#endif //ZOMBIE_H
