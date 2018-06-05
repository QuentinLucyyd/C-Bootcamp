/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 15:09:28 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/05 15:33:31 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void memoryLeak() {
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
