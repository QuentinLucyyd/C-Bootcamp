/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:28:08 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 09:39:48 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie(std::string _name, std::string _type);
		Zombie();
		~Zombie(void);
		void setType(std::string _type);
		void setName(std::string _name);
		void announce(void);
	private:
		std::string name;
		std::string type;
};

#endif
