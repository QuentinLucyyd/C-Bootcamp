/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:53:04 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 13:52:06 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon){
    Weapon::setType(weapon);
}
Weapon::~Weapon(void){return ;}
Weapon::Weapon(void){return ;}

void   Weapon::setType(std::string _type) {
    Weapon::type = _type;
}

const std::string& Weapon::getType(void) {
    return Weapon::type;
}