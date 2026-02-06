
#include "Contact.hpp"

Contact::Contact()
{
	for (int i = FirstName; i <= DarkestSecret; i++){
		this->_fieldData[i] = std::string();
	}
}

Contact::~Contact()
{
}

std::string Contact::_fieldNames[5] = {
	"FirstName",
	"LastName",
	"NickName",
	"PhoneNumber",
	"DarkestSecret"
};

void	Contact::newContact()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
	{

		while (true)
		{
			std::cout << Contact::_fieldNames[i] << ":" << std::endl;

			std::getline(std::cin, this->_fieldData[i]);

			if (std::cin.eof() == true)
				std::exit(0);

			if (this->_fieldData[i].length() == 0)
			{
				std::cout << TXT_CLR_RED << "Fields cannot be empty."
					<< TXT_CLR_RESET << std::endl;
				continue ;
			}

			if (hasNonPrintChar(this->_fieldData[i]) == true)
			{
				std::cout << TXT_CLR_RED << "Input contains non-printable characters."
						<< TXT_CLR_RESET << std::endl;
				continue ;
			}
			break ;
		}
	}
}

bool Contact::hasNonPrintChar(const std::string& input)
{
    for (char c : input)
    {
        if (!std::isprint(static_cast<unsigned char>(c)))
        {
            return true;
        }
    }
    return false;
}

void	Contact::showContactBasic(int index)
{
	std::cout << "|" << std::right << std::setw(10) << index + 1;
	for (int i = FirstName; i <= NickName; i++)
	{
		std::cout << "|";
		if (this->_fieldData[i].length() > 10)
			std::cout << this->_fieldData[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->_fieldData[i];
	}
	std::cout << "|" << std::endl;
}

// Prints all the information given to a contact.
void	Contact::showContactFull()
{
	for (int i = FirstName; i <= DarkestSecret; i++)
		std::cout << std::left << this->_fieldNames[i] << ":	"
			<< std::setw(20) << this->_fieldData[i] << std::endl;
}
