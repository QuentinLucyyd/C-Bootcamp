/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 08:14:32 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/08 12:03:53 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class	Fixed {
public:
	Fixed(void);
	Fixed(Fixed const &_new);
	Fixed(float const number);
	Fixed(int const number);
	~Fixed(void);
	Fixed &		operator=(Fixed const &rhs);
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	void	challengeNewcomer(void);
private:
	int					_fixedPoint;
	static int const	_fractorialBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);
#endif
