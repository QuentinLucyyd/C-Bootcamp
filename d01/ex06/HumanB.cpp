/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:17:18 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 15:04:36 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string _name): name(_name){return ;}

HumanB::~HumanB(void){return ;}

void    HumanB::setWeapon(Weapon &weapon){
    HumanB::_weapon = &weapon;
}

void    HumanB::attack(void) {
    std::cout << HumanB::name;
    std::cout << " attacks with his weapon ";
    std::cout << HumanB::_weapon->getType();
    std::cout << std::endl;
}