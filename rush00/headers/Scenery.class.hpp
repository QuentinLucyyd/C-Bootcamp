/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scenery.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 14:05:59 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/09 14:08:01 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENERY_HPP
#define SCENERY_HPP

#include "GameEntity.class.hpp"

class Scenery: public GameEntity{
    Scenery();
    Scenery(int n);
    ~Scenery();
};

#endif