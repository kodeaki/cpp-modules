
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : ClapTrap("ClapTrap")
{
}

ClapTrap::ClapTrap(const std::string& name)
	: ClapTrap(name, 10, 10, 0)
{
}

ClapTrap::ClapTrap(const std::string& name,
					unsigned int hitPoints,
					unsigned int energyPoints,
					unsigned int attackDamage)
	:	name(name),
		hitPoints(hitPoints),
		energyPoints(energyPoints),
		attackDamage(attackDamage)
{
	std::cout << "Called ClapTrap constructor for " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	:	name(other.name),
		hitPoints(other.hitPoints),
		energyPoints(other.energyPoints),
		attackDamage(other.attackDamage)
{
	std::cout << "Called ClapTrap copy constructor for " << name << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) {
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Called ClapTrap destructor for " << this->name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hitPoints == 0) {
		std::cout	<< "ClapTrap " << this->name
					<< " can't attack due to being kinda dead" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout	<< "ClapTrap " << this->name
					<< " can't attack due to insufficient energy" << std::endl;
	}
	else {
		this->energyPoints--;
		std::cout	<< "ClapTrap " << this->name << " attacks " << target
					<< ", causing " << this->attackDamage << " points of damage" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints == 0)
		std::cout	<< "ClapTrap " << this->name
					<< " kinda died already and can't take damage" << std::endl;
	else if (this->hitPoints < amount)
		this->hitPoints = 0;
	else {
		this->hitPoints = this->hitPoints - amount;
		std::cout	<< "ClapTrap " << this->name << " takes "
					<< amount << " points of damage " << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoints == 0) {
		std::cout	<< "ClapTrap " << this->name
					<< " can't be repaired due to being kinda dead" << std::endl;
	}
	else if (energyPoints == 0) {
		std::cout	<< "ClapTrap " << this->name
					<< " can't be repaired due to insufficient energy" << std::endl;
	}
	else {
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout	<< "ClapTrap " << this->name << " is repaired by "
					<< amount << " hitpoints" << std::endl;
	}
}
