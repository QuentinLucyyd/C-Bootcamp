/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:02:59 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 15:15:24 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string s, Weapon& w): _name(s), _weapon(w){return ;}
HumanA::~HumanA(void){return ;}

void HumanA::attack(void)
{
    std::cout << HumanA::_name << " attacks with his " << HumanA::_weapon.getType();
    std::cout << std::endl;
    return ;
}