#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
  public:
  	Zombie();
	~Zombie();

  	void	annouce( void );
	void	setName(std::string name);
  	Zombie	*zombieHorde( int N, std::string name );

  private:
  	std::string name;
};

#endif //ZOMBIE_H
