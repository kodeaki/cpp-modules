#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal(), _brain(new Brain())
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other) {
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void	Cat::makeSound()const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::setIdea(int index, const std::string& idea)
{
	_brain->setIdea(index, idea);
}

std::string		Cat::getIdea(int index)const
{
	return (_brain->getIdea(index));
}
