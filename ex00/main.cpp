#include "Zombie.hpp"

int main()
{
	Zombie*	pointer;

	pointer = newZombie("Luigi");
	delete (pointer);
	randomChump("Mario");
}
