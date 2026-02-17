
#include "Zombie.hpp"

Zombie::Zombie(std::string str) : _name(str)
{
	std::cout << "Constructor called on: " << _name << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Constructor called for one of the horde" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called on: " << _name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
