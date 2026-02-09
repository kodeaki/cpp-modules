
#include "Zombie.hpp"

Zombie::Zombie(std::string str) : _name(str)
{
	std::cout << "Constructor called on: " << _name << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called on: " << _name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
