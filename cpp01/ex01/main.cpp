
#include "Zombie.hpp"

int	main()
{
	int	horde_size = 5;

	Zombie	one_zombie("jack");
	one_zombie.announce();

	Zombie	*horde = zombieHorde(horde_size, "plant exterminator");
	for (int i = 0; i < horde_size; i++){
		horde[i].announce();
	}
	delete[] horde;
}
