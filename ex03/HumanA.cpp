/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:48:15 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 10:59:06 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>
#include "Weapon.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon_type) : name(name), weapon_type(weapon_type)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon_type.getType() << std::endl;
}
