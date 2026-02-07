
#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

const std::string TXT_CLR_RED = "\033[31m";
const std::string TXT_CLR_RESET = "\033[0m";

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
		bool	hasNonPrintChar(const std::string& input);

	public:
		Contact();
		~Contact();

		void	newContact();
		void	showContactBasic(int index);
		void	showContactFull();
};

#endif
