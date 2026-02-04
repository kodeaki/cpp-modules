#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
	private:
		static std::string	_fieldNames[5];
		std::string			_fieldData[5];

			enum field	{
				FirstName,
				LastName,
				NickName,
				PhoneNumber,
				DarkestSecret
			};

	public:
		Contact();
		~Contact();

};

#endif
