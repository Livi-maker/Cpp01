#include "Zombie.hpp"

int main()
{
	Zombie	*pointer;
	int		i;

	pointer = zombieHorde(10, "Liv");
	for (i = 0; i < 10; i++)
		pointer[i].announce();
	delete [] pointer;
}
