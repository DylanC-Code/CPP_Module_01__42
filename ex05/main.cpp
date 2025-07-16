/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 11:09:39 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 14:41:01 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char const *argv[])
{
    Harl harl;
    if (argc < 2)
        return 1;
    if (argc > 2)
        return 2;
    harl.complain(argv[1]);
    return 0;
}
