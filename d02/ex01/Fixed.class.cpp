/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 08:14:41 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/07 15:33:20 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

const int Fixed::_fractorialBits = 8;

Fixed::Fixed(void): _fixedPoint(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &_new){
	std::cout << "Copy constructor called" << std::endl;
	*this = _new;
}

Fixed::Fixed(int const number) {
	this->_fixedPoint = number << Fixed::_fractorialBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const number){
	this->_fixedPoint = (roundf(number * (1 << Fixed::_fractorialBits)));
	std::cout << "Float constructor called" << std::endl;
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

float	Fixed::toFloat( void ) const{
	return this->_fixedPoint / (float)(1 << Fixed::_fractorialBits);
}

int		Fixed::toInt( void ) const{
	return this->_fixedPoint / (1 << Fixed::_fractorialBits);
}

Fixed &		Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

std::ostream & operator<<(std::ostream &o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}