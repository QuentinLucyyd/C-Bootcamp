/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:53:25 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 13:46:11 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
    public:
        Weapon(std::string weapon);
        Weapon();
        ~Weapon(void);
        void setType(std::string _type);
        const std::string& getType();
    private:
        std::string type;
};

#endif
