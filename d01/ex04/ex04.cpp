/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 10:26:41 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 11:02:48 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    std::string  brain = "HI THIS IS BRAIN";
    std::string  *brainptr = &brain;
    std::string  &brainref = brain;

    std::cout << "String: " << brain << std::endl;
    std::cout << "String Pointer: " << *brainptr << std::endl;
    std::cout << "String Reference: " << brainref << std::endl;
}