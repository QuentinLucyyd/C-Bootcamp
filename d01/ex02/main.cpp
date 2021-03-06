/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:28:43 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 14:57:50 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(){
    ZombieEvent event;
    Zombie      *_zombie;
    Zombie      *_zomb;

    event.setZombieType("Tall");
    _zombie = event.newZombie("Quentin");
    _zombie->announce();
    _zomb = event.randomChump();
    delete _zomb;
    delete _zombie;
}