#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	
	public:
		Animal();
		Animal(const Animal& other);
		Animal&	operator=(const Animal& other);
		virtual ~Animal();

		// Setting a virtual method to "= 0" makes it a pure virtual function.
		// This makes the class abstract. Derived classes will have to implement
		// the pure virtual function to become non-abstract classes.
		// Removing the trailing "= 0" will make the code compilable.

		virtual void	makeSound()const = 0;
		// virtual void	makeSound()const;

		std::string		getType()const ;
};

#endif
