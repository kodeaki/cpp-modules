
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_nbrOfSavedContacts = 0;
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::showHomePage()
{
	std::cout << "Commands available: | ADD | SEARCH | EXIT |"
			<< std::endl;
}

void	PhoneBook::addContact()
{
	this->_contacts[this->_index].newContact();

	if (_nbrOfSavedContacts != 8)
		this->_nbrOfSavedContacts++;

	this->_index++;

	// If max contacts is reached, reset to oldest so new additions overwrite.
	if (this->_index == 8)
		this->_index = 0;
}

void	PhoneBook::searchContacts()
{
	std::string	input;

	if (this->_nbrOfSavedContacts == 0)
	{
		std::cout << TXT_CLR_RED << "You don't have any saved contacts."
				<< TXT_CLR_RESET << std::endl;
		return ;
	}

	// List out saved contacts and prompt input for a specific one to show.
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->_nbrOfSavedContacts; i++)
	{
		this->_contacts[i].showContactBasic(i);
		std::cout << "|-------------------------------------------|" << std::endl;
	}

	// Ask which contact to show.
	while (true)
	{
		std::cout << "Enter below the index of the contact you want to be shown, or \"0\" to quit searching."
				<< std::endl;

		// Read input.
		if (!std::getline(std::cin, input))
		{
			if (std::cin.eof())
				std::exit(0);
			continue;
		}
		// Check for a valid index.
		else if (input.length() != 1 || (input < "0" || input > "8"))
		{
			std::cout << TXT_CLR_RED
					<< "Input must be a number between 0-8"
					<< TXT_CLR_RESET << std::endl;
			continue ;
		}
		// Check for existing contacts index.
		else if ((std::atoi(input.c_str())) > this->_nbrOfSavedContacts)
		{
			std::cout << TXT_CLR_RED
					<< "Enter an existing contact's index."
					<< TXT_CLR_RESET << std::endl;
			continue ;
		}
		break ;
	}

	// Pressing 0 quits the search.
	if (input.compare("0") == 0)
		return ;

	// Display the contact details.
	this->_contacts[std::atoi(input.c_str()) - 1].showContactFull();
}
