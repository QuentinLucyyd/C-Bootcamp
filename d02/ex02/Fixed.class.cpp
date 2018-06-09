/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:17:48 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/07 15:28:03 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed( void ): _fixedPoint(0) {return ;}

Fixed::Fixed( Fixed const &_new ) {
	*this = _new;
}

Fixed::Fixed( int const number ){
    this->_fixedPoint = number << Fixed::_fractionalBits;
}

Fixed::Fixed( float const number ){
    this->_fixedPoint = roundf(number * (1 << Fixed::_fractionalBits));
}

Fixed::~Fixed( void ){return ;}

Fixed &		Fixed::operator=(Fixed const &rhs) {
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const{
	return this->_fixedPoint;
}

void	Fixed::setRawBits( int const raw ){
	this->_fixedPoint = raw;
}

float	Fixed::toFloat( void ) const {
	return this->_fixedPoint / (float)(1 << Fixed::_fractionalBits);
}

int		Fixed::toInt( void ) const{
	return this->_fixedPoint / (1 << Fixed::_fractionalBits);
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs){
	o << rhs.toFloat();
	return o;
}

bool	Fixed::operator<(Fixed const &rhs) const{
	return (this->_fixedPoint < rhs.getRawBits());
}

bool	Fixed::operator>(Fixed const &rhs) const{
	return (this->_fixedPoint > rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const &rhs) const{
	return (this->_fixedPoint >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const &rhs) const{
	return (this->_fixedPoint <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const &rhs)  const{
	return (this->_fixedPoint == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const &rhs) const{
	return (this->_fixedPoint != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &rhs) const{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++(void) {
    this->_fixedPoint++;
    return (*this);
}

Fixed	Fixed::operator++(int) {
    Fixed _new(*this);
    ++(*this);
    return _new; 
}

Fixed	&Fixed::operator--(void) {
    this->_fixedPoint--;
    return (*this);
}

Fixed	Fixed::operator--(int) {
    Fixed _new(*this);
    --(*this);
    return _new;
}

Fixed &Fixed::min(Fixed & a, Fixed & b) {
    if (a.getRawBits() > b.getRawBits()) {
        return b;
    }
    return a;
}

Fixed const 	&Fixed::min(Fixed const & a, Fixed const & b){
    if (a.getRawBits() > b.getRawBits()) {
        return b;
    }
    return a;
}

Fixed &Fixed::max(Fixed & a, Fixed & b) {
    if (a.getRawBits() > b.getRawBits()) {
        return a;
    }
    return b;
}

Fixed const 	&Fixed::max(Fixed const & a, Fixed const & b) {
    if (a.getRawBits() > b.getRawBits()) {
        return a;
    }
    return b;
}