/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:12:20 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/05 15:00:05 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	PonyOnTheHeap(std::string color, std::string name) {
	Pony *pony = new Pony(color, name);
	std::cout << "Pony Color: " << pony->getPonyColor() << std::endl;
	std::cout << "Pony Name: " << pony->getPonyName() << std::endl;
	delete pony;
}

void	PonyOnTheStack(std::string color, std::string name) {
	Pony pony(color, name);
	
	std::cout << "Pony Color: " << pony.getPonyColor() << std::endl;
	std::cout << "Pony Name: " << pony.getPonyName() << std::endl;
}

int main(){
	PonyOnTheStack("red", "Quentin");
	std::cout << std::endl;
	PonyOnTheHeap("red", "Quentin");
}
