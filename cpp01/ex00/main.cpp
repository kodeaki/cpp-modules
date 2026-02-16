
#include "Zombie.hpp"

int	main()
{
	Zombie*	zombie1 = newZombie("john");
	zombie1->announce();
	randomChump("zack");
	delete(zombie1);
}
