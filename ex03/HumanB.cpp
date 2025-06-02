#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

void	HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << _name << " attacks\n";
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
