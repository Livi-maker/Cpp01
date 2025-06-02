#include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon) : _weapon(weapon)
{
	this->_name = name;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << _weapon.getType() << "\n";
}
