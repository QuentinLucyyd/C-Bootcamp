/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:28:24 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 14:24:05 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieEvent::ZombieEvent(void) {return ;}
ZombieEvent::~ZombieEvent(void) {return ;}

void    ZombieEvent::setZombieType(std::string _type) {
    ZombieEvent::type = _type;
}

Zombie* ZombieEvent::newZombie(std::string _name) {
    return (new Zombie(_name, ZombieEvent::type));
}

Zombie* ZombieEvent::randomChump() {
    Zombie*     _randomZombie;
    std::string names[8] = {"David", "Jhon", "Steven", "Poppy", "Pony", "Rob", "Bobby", "Jimmy"};

    srand((int)time(0));
    int random = rand() % 8;
    _randomZombie = newZombie(names[random]);
    _randomZombie->announce();
    return (_randomZombie);
}