
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::operator = (other);
	std::cout << "Cat copy assignment called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound()const
{
	std::cout << "Meow" << std::endl;
}
