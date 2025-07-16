/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:59:14 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 11:07:16 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &name) : name(name) {}

HumanB::~HumanB() {};

void HumanB::attack()
{
    if (!this->weapon_type)
        return;
    std::cout << this->name << " attacks with their " << this->weapon_type->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon_type)
{
    this->weapon_type = &weapon_type;
}
