/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:04:12 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 14:20:48 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

Brain::Brain(void){
    std::stringstream   adr;
    adr << this;
    this->address = adr.str();
    return ;
}

Brain::~Brain(void){return ;}

std::string Brain::identify(void) const{
    return address;
}