/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 21:04:05 by root              #+#    #+#             */
/*   Updated: 2018/06/10 13:03:28 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bullet.class.hpp"

Bullet::Bullet(void): GameEntity(){
    this->_display = '*';
    this->isActive = false;
    this->_pos_x = 0;
    this->_pos_y = 0;
    return ;
}

Bullet::Bullet(Bullet const&_new){
    *this = _new;
}

Bullet::~Bullet(void){return ;}

Bullet &Bullet::operator=(Bullet const&_new){
    this->_display = _new._display;
    this->_pos_x = _new._pos_x;
    this->_pos_y = _new._pos_y;
    this->isActive = _new.isActive;
    return (*this);
}

void Bullet::moveBullet(WINDOW *win, int x, int y){
    this->_pos_x = x;
    this->_pos_y = y;
    mvwprintw(win, this->_pos_y - 2, this->_pos_x + 2, this->_display.c_str());
}

bool Bullet::getState(void){
    return (this->isActive);
}

void Bullet::makeAlive(void){
    this->isActive = true;
}

void Bullet::remove(void){
    this->isActive = false;
}