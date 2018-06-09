/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 08:14:32 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/07 09:07:27 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class	Fixed {
public:
	Fixed(void);
	Fixed(Fixed const &_new);
	~Fixed(void);

	Fixed &		operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_fixedPoint;
	static int const	_factorialBits = 8;

};
#endif
