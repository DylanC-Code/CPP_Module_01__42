/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 10:45:16 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 10:49:26 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef __HUMAN_A__
#define __HUMAN_A__

class HumanA
{
private:
    std::string name;
    std::string weapon_type;

public:
    HumanA(const std::string &name, const std::string &weapon_type);
    ~HumanA();
    void attack();
};

#endif
