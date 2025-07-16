/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 14:13:36 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 14:16:53 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#ifndef __HARL__
#define __HARL__

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl();
    ~Harl();

    void complain(std::string level);
};

#endif
