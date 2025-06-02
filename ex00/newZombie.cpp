/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <ldei-sva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:18:54 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/06/02 12:18:56 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

 Zombie* newZombie(std::string name)
{
	Zombie* newZombie;

	newZombie = new Zombie(name);
	return (newZombie);
 }

