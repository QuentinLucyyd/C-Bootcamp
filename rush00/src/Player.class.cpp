/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:22:24 by root              #+#    #+#             */
/*   Updated: 2018/06/08 21:55:57 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Player.class.hpp"

Player::Player(void):GameEntity(){
    this->_display = "<-0->";
    return ;
}

Player::Player(std::string display): GameEntity(){
    this->_display = display;
    return ;
}

Player::Player(Player const &_new) {
    *this = _new;
}

Player::~Player(void){
    return ;
}

Player &Player::operator=(Player const &_rhs){
    this->_hitPoints = _rhs._hitPoints;
    this->_display = _rhs._display;
    return (*this);
}