/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:45:16 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 11:08:20 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB__
#define __HUMANB__

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weapon_type;

public:
    HumanB(const std::string &name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon &weapon_type);
};

#endif
