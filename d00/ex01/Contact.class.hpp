/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 10:23:42 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/04 14:43:04 by zhakonze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <string>
#include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact();

	void			setFirstName(std::string _FirstName);
	void			setLastName(std::string _LastName);
	void 			setNickName(std::string _NickName);
	void			setLogin(std::string _Login);
	void			setPostalAddress(std::string _PostalAddress);
	void			setEmailAddress(std::string _EmailAddress);
	void 			setPhoneNumber(std::string _PhoneNumber);
	void 			setBirthdayDate(std::string _BirthdayDate);
	void			setFavouriteMeal(std::string _FavoriteMeal);
	void			setUnderwearColor(std::string _UnderwearColor);
	void			setDarkestSecret(std::string _DarkestSecret);
	std::string		getFirstName(void);
	std::string		getLastName(void);
	std::string 	getNickName(void);
	std::string 	getlogin(void);
	std::string		getPostalAddress(void);
	std::string		getEmailAddress(void);
	std::string		getPhoneNumber(void);
	std::string		getBirthdayDate(void);
	std::string 	getFavouriteMeal(void);
	std::string 	getUnderwearcolor(void);
	std::string 	getDarkestSecret(void);

private:
	std::string		_firstName;
	std::string		_lastName;
	std::string		_nickname;
	std::string		_login;
	std::string		_postalAddress;
	std::string		_emailAddress;
    std::string		_phoneNumber;
    std::string		_birthdayDate;
    std::string		_favoriteMeal;
    std::string		_underwearColor;
    std::string		_darkestSecret;
};

Contact 	addContact(void);
void		searchContact(Contact phonebook[], int length);

#endif
