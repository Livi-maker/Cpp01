#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon)
{
	this->_weapon = &weapon;
	this->_name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << _weapon->getType() << "\n";
}
