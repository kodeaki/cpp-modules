
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl << "--- CREATING kitty ---" << std::endl << std::endl;
	Cat kitty;

	std::cout << std::endl << "--- SETTING idea to a bad idea ---" << std::endl;
	kitty.setIdea(1, "Bad idea...");

	std::cout << std::endl << "--- GETTING kitty idea ---" << std::endl << std::endl;
	std::cout << kitty.getIdea(1) << std::endl << std::endl;
	
	std::cout << "--- CREATING kittyTwo BASED ON kitty ---" << std::endl << std::endl;
	Cat kittyTwo = kitty;

	std::cout << std::endl << "--- GETTING kittyTwo idea ---" << std::endl << std::endl;
	std::cout << kittyTwo.getIdea(1) << std::endl << std::endl;

	std::cout << "--- SETTING kittyTwo IDEA INDEX 1 ---" << std::endl << std::endl;
	kittyTwo.setIdea(1, "Good idea!");
	std::cout << kittyTwo.getIdea(1) << std::endl << std::endl;

	std::cout << "--- CHECKING IF kitty IDEA INDEX 1 CHANGED --- " << std::endl << std::endl;
	std::cout << kitty.getIdea(1) << std::endl << std::endl;


	/* -------- SUBJECT REQUIRED TEST -------- */

	std::cout << "--- CREATING ANIMAL ARRAY ---" << std::endl << std::endl;

	const int size = 6;
	Animal* animals[size];

	for (int i = 0; i < size / 2; i++)
	{
		std::cout << "Creating Dog " << i << std::endl << std::endl;
		animals[i] = new Dog();
	}

	for (int i = size / 2; i < size; i++)
	{
		std::cout << "Creating Cat " << i << std::endl << std::endl;
		animals[i] = new Cat();
	}

	std::cout << std::endl << "--- DELETING ANIMAL ARRAY ---" << std::endl << std::endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "Deleting animal " << i << std::endl << std::endl;
		delete animals[i];
	}

	return (0);
}
