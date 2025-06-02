#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(const std::string name, Weapon& weapon);
		void	attack(void);

	private:
		std::string	_name;
		Weapon& _weapon;
};

#endif
