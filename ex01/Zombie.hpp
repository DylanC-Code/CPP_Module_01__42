/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:45:35 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 10:11:09 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    void announce(void);
    void setName(std::string name);
};

#endif
