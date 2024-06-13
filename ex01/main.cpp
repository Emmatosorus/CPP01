#include "Zombie.h"

int	main(void)
{
	int hordeSize = 10;
	Zombie *allocated = NULL;

	allocated = allocated->zombieHorde(hordeSize, "Bob");
	for (int i = 0; i < hordeSize; i++)
		allocated[i].annouce();
	delete [] allocated;
	return (0);
}
