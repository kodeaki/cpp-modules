
#include "Zombie.hpp"

int	main()
{
	Zombie*	zombie1 = newZombie("john");
	zombie1->announce();
	delete(zombie1);
	randomChump("zack");
}
