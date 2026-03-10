
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	newClapTrap("bob");
	ClapTrap	copyBob(newClapTrap);
	ClapTrap	anotherClapTrap("bobertson");
	std::cout << std::endl;

	copyBob.attack("bobertson");
	std::cout << std::endl;

	anotherClapTrap.takeDamage(10);
	anotherClapTrap.takeDamage(10);
	std::cout << std::endl;

	newClapTrap.beRepaired(10);
	newClapTrap.takeDamage(10);
	newClapTrap.takeDamage(10);
	newClapTrap.takeDamage(10);
	newClapTrap.attack("nothing");
	newClapTrap.beRepaired(10);
	std::cout << std::endl;

	ClapTrap	energyTestGuy("john");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.attack("nothing");
	energyTestGuy.beRepaired(10);
	std::cout << std::endl;

	return(0);
}
