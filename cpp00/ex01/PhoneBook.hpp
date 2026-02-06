
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
    private:
        Contact     _contacts[8];
		int			_nbrOfSavedContacts;
		int			_index;

    public:
        PhoneBook();
        ~PhoneBook();

		void	showHomePage();
		void	addContact();
		void	searchContacts();
};

#endif
