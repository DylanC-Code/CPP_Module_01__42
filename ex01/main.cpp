/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 14:45:18 by dcastor           #+#    #+#             */
/*   Updated: 2025/07/16 10:17:57 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <string>
#include <iostream>
#include <sstream>

Zombie *zombieHorde(int N, std::string name);

int main(int argc, char **argv)
{
    int N;

    if (argc != 3)
        return 1;
    std::istringstream iss(argv[1]);
    if (!(iss >> N) || !iss.eof())
        return 2;
    Zombie *zombies = zombieHorde(N, argv[2]);
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete[] zombies;
    return 0;
}
