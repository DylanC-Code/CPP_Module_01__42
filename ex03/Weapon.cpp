/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:12:52 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 11:13:06 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {};

Weapon::~Weapon() {};

const std::string &Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
