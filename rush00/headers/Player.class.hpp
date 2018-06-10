/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:19:19 by root              #+#    #+#             */
/*   Updated: 2018/06/08 21:40:27 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "GameEntity.class.hpp"

class Player: public GameEntity {
public:
    Player(void);
    Player(Player const &_new);
    Player(std::string display);
    ~Player(void);
    Player &operator=(Player const &_rhs);
};

#endif
