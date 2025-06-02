#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* array;

	array = new Zombie[N];
	for (N > 0; N--; array[N])
	{
		array[N] = Zombie(name);
		array[N].announce();
	}
	return (array);
}
