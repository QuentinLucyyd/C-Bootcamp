/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 14:17:50 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/07 15:19:15 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class	Fixed {
public:
	Fixed(void);
	Fixed(Fixed const &_new);
	Fixed(float const number);
	Fixed(int const number);
	~Fixed(void);
    int		getRawBits(void) const;
	void	setRawBits(int const raw);
    float	toFloat(void) const;
	int		toInt(void) const;
	Fixed	&operator=(Fixed const &rhs);
	bool	operator<(Fixed const &number) const;
	bool	operator>(Fixed const &number) const;
	bool	operator>=(Fixed const &number) const;
	bool	operator<=(Fixed const &number) const;
	bool	operator==(Fixed const &number) const;
	bool	operator!=(Fixed const &number) const;
	Fixed	operator+(Fixed const &number) const;
	Fixed	operator-(Fixed const &number) const;
	Fixed	operator*(Fixed const &number) const;
	Fixed	operator/(Fixed const &number) const;
	Fixed	&operator++(void);
	Fixed	operator++(int);
	Fixed	&operator--(void);
	Fixed	operator--(int);
	static Fixed &min(Fixed & a, Fixed & b);
	static Fixed const 	& min(Fixed const & a, Fixed const & b);
	static Fixed &max(Fixed & a, Fixed & b);
	static Fixed const 	& max(Fixed const & a, Fixed const & b);
private:
	int					_fixedPoint;
	static int const	_fractionalBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif
