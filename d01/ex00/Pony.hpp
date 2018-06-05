/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:11:55 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/05 15:07:33 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Pony {
	public:
		Pony(std::string _color, std::string _name);
		~Pony(void);
		void setPonyColor(std::string color);
		void setPonyName(std::string name);

		std::string getPonyColor(void);
		std::string getPonyName(void);
	private:
		std::string color;
		std::string name;
};
