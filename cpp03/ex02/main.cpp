
#include "FragTrap.hpp"

int	main()
{
	FragTrap	newFragTrap("bob");
	FragTrap	copyBob(newFragTrap);
	FragTrap	anotherFragTrap("jake");
	std::cout << std::endl;

	copyBob.attack("jake");
	anotherFragTrap.takeDamage(30);
	std::cout << std::endl;

	newFragTrap.beRepaired(10);
	newFragTrap.takeDamage(100);
	newFragTrap.takeDamage(10);
	newFragTrap.takeDamage(10);
	newFragTrap.attack("nothing");
	newFragTrap.beRepaired(10);
	std::cout << std::endl;

	FragTrap	energyTestGuy("john");
	for (int i = 0; i < 100; i++)
		energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.beRepaired(10);
	std::cout << std::endl;

	copyBob.highFivesGuys();
	std::cout << std::endl;

	return(0);
}
