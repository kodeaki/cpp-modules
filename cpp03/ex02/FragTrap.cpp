
#include "FragTrap.hpp"

FragTrap::FragTrap() : FragTrap("FragTrap")
{
}

FragTrap::FragTrap(const std::string& name)
	:	ClapTrap(name, 100, 100, 30)
{
	std::cout << "Called FragTrap constructor for " << this->name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
	:	ClapTrap(other.name, other.hitPoints, other.energyPoints, other.attackDamage)
{
	std::cout << "Called FragTrap copy constructor for " << this->name << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Called FragTrap destructor for " << name << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "High Five!" << std::endl;
}
