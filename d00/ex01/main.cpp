/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 10:22:58 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/03 10:23:01 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

void	prompt(void) {
	std::cout << "Please enter one of the following commands";
	std::cout << std::endl << "ADD || SEARCH || EXIT" << std::endl;
	std::cout << "-> ";
}

int main() {
	int index;
	std::string command;

	index = 0;
	Contact phoneBook[8];

	while(1) {
		prompt();
		getline(std::cin, command);

		if (command == "ADD") {
			if (index >= 8) {
				std::cout << "Enough Contacts, For now...";
			} else {
				phoneBook[index++] = addContact();
			}
		} else if (command == "SEARCH") {
			searchContact(phoneBook, index);
		} else if (command == "EXIT") {
			return 0;
		}
	}
}
