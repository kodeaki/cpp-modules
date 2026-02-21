
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>

class HumanB{
	private:
		std::string	_name;
		Weapon		_weapon;

	public:
		HumanB();
		~HumanB();

		void	attack();
}

#endif
