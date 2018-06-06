/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:11:48 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 10:30:16 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string _color, std::string _name) {
	Pony::setPonyColor(_color);
	Pony::setPonyName(_name);
	std::cout << "The Pony is Constructed\n";
}

Pony::~Pony(void) {
	std::cout << "The Pony Been Deconstruncted\n";
}

void	Pony::setPonyColor(std::string _color) {
	Pony::color = _color;
}

void	Pony::setPonyName(std::string _name) {
	Pony::name = _name;
}

std::string Pony::getPonyName(void) {
	return Pony::name;
}

std::string Pony::getPonyColor(void) {
	return Pony::color;
}
