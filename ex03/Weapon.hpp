/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:35:25 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 11:13:00 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType() const;
    void setType(std::string name);
};

#endif
