/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:17:13 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 15:03:54 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB{
    public:
        HumanB(std::string _name);
        ~HumanB(void);
        void attack();
        void setWeapon(Weapon&);
    private:
        Weapon* _weapon;
        std::string name;
};
#endif