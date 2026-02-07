
#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie*	newZomboid = new Zombie(name);
	return (newZomboid);
}
