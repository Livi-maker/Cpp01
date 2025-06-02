/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <ldei-sva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 13:48:43 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/06/02 14:32:31 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{};

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie " << name << " was created\n";
};

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->name << " died\n";
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << "\n";
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}
