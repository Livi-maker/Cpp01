#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* pointer;
	int		i;

	pointer = new Zombie[N];
	for (i = 0; i < 10; i++)
		pointer[i].set_name(name);
	return (pointer);
}
