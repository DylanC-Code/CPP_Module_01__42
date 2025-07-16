#include "Zombie.hpp"
#include <iostream>

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:52:56 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/15 14:52:57 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Destructor call for: " << this->name << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
