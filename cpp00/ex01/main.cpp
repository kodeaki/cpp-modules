
#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook	PhoneBook;
	std::string	input;

	PhoneBook.showHomePage();
	while (std::getline(std::cin, input))
	{
		if (input.compare("ADD") == 0)
			PhoneBook.addContact();
		else if (input.compare("SEARCH") == 0)
			PhoneBook.searchContacts();
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "Farewell..." << std::endl;
			break ;
		}
		PhoneBook.showHomePage();
	}
}
