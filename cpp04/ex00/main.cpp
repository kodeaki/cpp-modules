
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		Animal animal;
		std::cout << std::endl;

		Cat cat;
		std::cout << std::endl;

		Dog dog;
		std::cout << std::endl;

		animal.makeSound();
		cat.makeSound();
		dog.makeSound();

	}
	std::cout << std::endl;
	std::cout << std::endl;

    std::cout << "Subject test: " << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
}
