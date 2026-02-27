
#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::debug( void )
{
	std::cout<< "[DEBUG]" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[INFO]" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[WARNING]" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ERROR]" << std::endl;
}

void	Harl::complain( std::string level )
{
	void		(Harl::*functionPtrs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	valid_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == valid_levels[i])
			(this->*functionPtrs[i])();
	}
}
