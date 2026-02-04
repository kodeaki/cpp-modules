
#include "Contact.hpp"
#include <string>

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


