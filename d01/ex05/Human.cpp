/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:04:35 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 14:20:24 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

Human::Human(void){return ;}
Human::~Human(void){return ;}

std::string Human::identify(void) const{
    return Human::_brain.identify();
}

Brain   Human::getBrain(void) {
    return Human::_brain;
}