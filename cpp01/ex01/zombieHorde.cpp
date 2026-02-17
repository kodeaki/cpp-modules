
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
		Zombie		*theHorde = new Zombie[N];
		for (int i = 0; i < N; i++){
				theHorde[i].setName(name);
		}
		return theHorde;
}
