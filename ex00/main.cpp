#include "Zombie.hpp"

int main()
{
	Zombie*	pointer;
	Zombie	zombie;

	pointer = newZombie("Luigi");
	delete (pointer);
	randomChump("Mario");
}
