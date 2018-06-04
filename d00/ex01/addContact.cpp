/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 13:04:42 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/03 13:04:44 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

Contact 	addContact(void) {
	std::string		temp;
	Contact 		newContact;

	std::cout << std::endl << "Enter your First Name: ";
	getline(std::cin, temp);
	newContact.setFirstName(temp);
	std::cout << std::endl << "Enter your Last Name: ";
	getline(std::cin, temp);
	newContact.setLastName(temp);
	std::cout << std::endl << "Enter your Nickname: ";
	getline(std::cin, temp);
	newContact.setNickName(temp);
	std::cout << std::endl << "Enter your Login: ";
	getline(std::cin, temp);
	newContact.setLogin(temp);
	std::cout << std::endl << "Enter your Postal Address: ";
	getline(std::cin, temp);
	newContact.setPostalAddress(temp);
	std::cout << std::endl << "Enter your Email Address: ";
	getline(std::cin, temp);
	newContact.setEmailAddress(temp);
	std::cout << std::endl << "Enter your Phone Number: ";
	getline(std::cin, temp);
	newContact.setPhoneNumber(temp);
	std::cout << std::endl << "Enter your Birthday Date: ";
	getline(std::cin, temp);
	newContact.setBirthdayDate(temp);
	std::cout << std::endl << "Enter your Favourite Meal: ";
	getline(std::cin, temp);
	newContact.setFavouriteMeal(temp);
	std::cout << std::endl << "Enter your Darkest Secret: ";
	getline(std::cin, temp);
	newContact.setDarkestSecret(temp);
	return newContact;
}