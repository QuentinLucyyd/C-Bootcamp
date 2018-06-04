/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 12:10:02 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/03 12:10:05 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"


Contact::Contact(void) {return ;}
Contact::~Contact(void) {return ;}

std::string		Contact::getFirstName(void) {
	return (this->_firstName);
}

std::string 	Contact::getLastName(void) {
	return (this->_lastName);
}

std::string 	Contact::getNickName(void) {
	return (this->_nickname);
}

std::string 	Contact::getlogin(void) {
	return (this->_login);
}

std::string		Contact::getPostalAddress(void) {
	return (this->_postalAddress);
}

std::string		Contact::getEmailAddress(void) {
	return (this->_emailAddress);
}

std::string		Contact::getPhoneNumber(void) {
	return (this->_phoneNumber);
}

std::string		Contact::getBirthdayDate(void) {
	return (this->_birthdayDate);
}

std::string 	Contact::getFavouriteMeal(void) {
	return (this->_favoriteMeal);
}

std::string 	Contact::getUnderwearcolor(void) {
	return (this->_underwearColor);
}

std::string 	Contact::getDarkestSecret(void) {
	return (this->_darkestSecret);
}

void			Contact::Contact::setFirstName(std::string _FirstName) {
	this->_firstName = _FirstName;
}

void			Contact::setLastName(std::string _LastName) {
	this->_lastName = _LastName;
}

void 			Contact::setNickName(std::string _NickName) {
	this->_nickname = _NickName;
}

void			Contact::setLogin(std::string _Login) {
	this->_login = _Login;
}

void			Contact::setPostalAddress(std::string _PostalAddress) {
	this->_postalAddress = _PostalAddress;
}
void			Contact::setEmailAddress(std::string _EmailAddress) {
	this->_emailAddress = _EmailAddress;
}

void 			Contact::setPhoneNumber(std::string _PhoneNumber) {
	this->_phoneNumber = _PhoneNumber;
}
void 			Contact::setBirthdayDate(std::string _BirthdayDate) {
	this->_birthdayDate = _BirthdayDate;
}

void			Contact::setFavouriteMeal(std::string _FavoriteMeal) {
	this->_favoriteMeal = _FavoriteMeal;
}
void			Contact::setUnderwearColor(std::string _UnderwearColor) {
	this->_underwearColor = _UnderwearColor;
}
void			Contact::setDarkestSecret(std::string _DarkestSecret) {
	this->_darkestSecret = _DarkestSecret;
}