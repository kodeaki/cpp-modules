
#include "Dog.hpp"

Dog::Dog() : Animal(), _brain(new Brain())
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other) {
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	std::cout << "Dog copy assignment called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound()const
{
	std::cout << "Woof woof" << std::endl;
}

void	Dog::setIdea(int index, const std::string& idea)
{
	_brain->setIdea(index, idea);
}

std::string		Dog::getIdea(int index)const
{
	return (_brain->getIdea(index));
}
