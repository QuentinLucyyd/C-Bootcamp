/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:28:00 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 09:42:31 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string _name, std::string _type) : name(_name), type(_type) {return;}
Zombie::Zombie() {return;}
Zombie::~Zombie(void){return;};

void Zombie::setType(std::string _type) {
	Zombie::type = _type;
}

void Zombie::setName(std::string _name) {
	Zombie::name = _name;
}

void Zombie::announce(void) {
	std::cout << "<" << Zombie::name;
	std::cout << " (" << Zombie::type;
	std::cout << ")> Braiiiiiiiins....." << std::endl;
}