/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:17:08 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 10:24:30 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde(int n) {
    ZombieHorde::_zombies = new Zombie[n];
    ZombieHorde::length = n;
    std::string names[8] = {"David", "Jhon", "Steven", "Poppy", "Pony", "Rob", "Bobby", "Jimmy"};
    int i = -1;

    srand((int)time(0));
    while (++i < n) {
        int random = rand() % 8;
        _zombies[i].setType("Horde");
        _zombies[i].setName(names[random]);
    }
}

void ZombieHorde::announce(void) {
    int index = -1;

    while(++index < length) {
        ZombieHorde::_zombies[index].announce();
    }
}

ZombieHorde::~ZombieHorde(void) {return ;} 