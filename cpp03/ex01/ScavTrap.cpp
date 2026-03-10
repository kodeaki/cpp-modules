
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ScavTrap("ScavTrap")
{
}

ScavTrap::ScavTrap(const std::string& name)
	:	ClapTrap(name, 100, 50, 20)
{
	std::cout << "Called ScavTrap constructor for " << this->name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
	:	ClapTrap(other.name, other.hitPoints, other.energyPoints, other.attackDamage)
{
	std::cout << "Called ScavTrap copy constructor for " << this->name << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0) {
		std::cout	<< "ScavTrap " << this->name
					<< " can't attack due to being kinda dead" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout	<< "ScavTrap " << this->name
					<< " can't attack due to insufficient energy" << std::endl;
	}
	else {
		this->energyPoints--;
		std::cout	<< "ScavTrap " << this->name << " attacks " << target
					<< ", causing " << this->attackDamage << " points of damage" << std::endl;
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "Called ScavTrap destructor for " << name << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap" << this->name <<" is now in Gate keeper mode" << std::endl;
}
