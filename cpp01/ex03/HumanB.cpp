
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB()
{

}

void	HumanB::attack()
{
	if (this->_weapon == NULL) {
		std::cout << this->_name
				<< " has been abandoned by the Gods and only has his fists left to fight with"
				<< std::endl;
	}
	else {
	std::cout << this->_name
			<< " attacks with their "
			<< this->_weapon->getType()
			<< std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
