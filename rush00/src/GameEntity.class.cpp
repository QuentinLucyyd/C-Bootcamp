/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:04:51 by root              #+#    #+#             */
/*   Updated: 2018/06/08 22:07:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/GameEntity.class.hpp"

GameEntity::GameEntity(void): _pos_x(0), _pos_y(0), _hitPoints(3){
    return ;
}

GameEntity::GameEntity(GameEntity const &_new) {
    *this = _new;
    return ;
}

GameEntity::~GameEntity(void) {return ;}

GameEntity& GameEntity::operator=(GameEntity const &_rhs){
    this->_pos_x = _rhs._pos_x;
    this->_pos_y = _rhs._pos_y;
    this->_hitPoints = _rhs._hitPoints;
    this->_display = _rhs._display;
    return (*this);
}

std::string GameEntity::getDisplay(void){
    return this->_display;
}

void        GameEntity::setX(int x) {this->_pos_x = x;}
void        GameEntity::setY(int y) {this->_pos_y = y;}
int         GameEntity::getX(void){return this->_pos_x;}
int         GameEntity::getY(void){return this->_pos_y;}