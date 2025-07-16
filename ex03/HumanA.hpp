/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:45:16 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 11:08:12 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA__
#define __HUMANA__

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon &weapon_type;

public:
    HumanA(const std::string &name, Weapon &weapon_type);
    ~HumanA();
    void attack();
};

#endif
