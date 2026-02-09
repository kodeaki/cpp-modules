
#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie newZombs = Zombie(name);
	newZombs.announce();
}
