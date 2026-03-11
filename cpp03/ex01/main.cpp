
#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	newScavTrap("bob");
	ScavTrap	copyBob(newScavTrap);
	ScavTrap	anotherScavTrap("jake");
	std::cout << std::endl;

	copyBob.attack("jake");
	anotherScavTrap.takeDamage(20);
	std::cout << std::endl;

	newScavTrap.beRepaired(10);
	newScavTrap.takeDamage(100);
	newScavTrap.takeDamage(10);
	newScavTrap.takeDamage(10);
	newScavTrap.attack("nothing");
	newScavTrap.beRepaired(10);
	std::cout << std::endl;

	ScavTrap	energyTestGuy("john");
	for (int i = 0; i < 50; i++)
		energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.beRepaired(10);
	std::cout << std::endl;

	copyBob.guardGate();
	std::cout << std::endl;

	return(0);
}
