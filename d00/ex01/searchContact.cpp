/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchContact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 13:36:32 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/04 14:35:57 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>
#include <cstdlib>

void	cols() {
	std::cout << "============================================";
	std::cout << std::endl;
	std::cout << "Index     |";
	std::cout << "First Name|";
	std::cout << "Last Name |";
	std::cout << "Nickname  |" << std::endl;
	std::cout << "============================================";
	std::cout << std::endl;
}

void		truncate(std::string column) {
	int		index;

	index = -1;
	while(++index < 9) {
		std::cout << column[index];
	}
	std::cout << ".|";
}

void	addCol(std::string column) {
	int spaces;

	spaces = -1;
	if (column.length() > 10) {
		truncate(column);
	} else {
		std::cout << column;
		spaces = 10 - column.length();
		while(spaces > 0) {
			std::cout << " ";
			spaces--;
		}
		std::cout << "|";
	}
}

void	searchContact(Contact phonebook[], int length) {
	int 	index;
	int 	search;

	search = 0;
	index = -1;
	cols();
	while(++index < length) {
		std::cout << index << "         |";
		addCol(phonebook[index].getFirstName());
		addCol(phonebook[index].getLastName());
		addCol(phonebook[index].getNickName());
		std::cout << std::endl;
	}
	std::cout << std::endl << "input the index of the searched user: ";
	std::cin >> search;
	if (search > length - 1) {
		std::cout << "Sorry, that index is not found";
	} else {
		std::cout << "First Name: " << phonebook[search].getFirstName() << std::endl;
        std::cout << "Last Name: " << phonebook[search].getLastName() << std::endl;
        std::cout << "Nickname: " << phonebook[search].getNickName() << std::endl;
        std::cout << "Login:" << phonebook[search].getlogin() << std::endl;
        std::cout << "Postal Address: " << phonebook[search].getPostalAddress() << std::endl;
        std::cout << "Email Address: " << phonebook[search].getEmailAddress() << std::endl;
        std::cout << "Phone Number: " << phonebook[search].getPhoneNumber() << std::endl;
        std::cout << "Birthday Date: " << phonebook[search].getBirthdayDate() << std::endl;
        std::cout << "Favourite Meal: " << phonebook[search].getFavouriteMeal() << std::endl;
        std::cout << "Underwear Color: " << phonebook[search].getUnderwearcolor() << std::endl;
        std::cout << "Darkest Secret: " << phonebook[search].getDarkestSecret() << std::endl;
	}
}
