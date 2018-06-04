/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 18:01:41 by qmanamel          #+#    #+#             */
/*   Updated: 2018/05/23 18:02:42 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int j;
	if (argc > 1) {
		for (int i = 1; i < argc; ++i) {
			j = -1;
			while(argv[i][++j]) {
				argv[i][j] = toupper(argv[i][j]);
			}
			std::cout << argv[i];
		}
		std::cout << "\n";
	} else {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	return (1);
}
