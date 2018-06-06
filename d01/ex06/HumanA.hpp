/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:01:04 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/06 15:15:43 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);
    void        attack(void);

private:
    std::string _name;
    Weapon&     _weapon;
};

#endif