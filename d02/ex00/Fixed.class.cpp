/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 08:14:41 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/07 09:09:13 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void): _fixedPoint(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &_new){
	std::cout << "Copy constructor called" << std::endl;
	*this = _new;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void    Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
}

Fixed &		Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();

	return *this;
}