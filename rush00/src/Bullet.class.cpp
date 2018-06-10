/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 21:04:05 by root              #+#    #+#             */
/*   Updated: 2018/06/10 06:44:59 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Bullet.class.hpp"

Bullet::Bullet(void): GameEntity(){
    this->_display = '*';
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
    return (*this);
}

void Bullet::moveBullet(WINDOW *win, int direction, int x, int y, int max_y){
    this->_pos_x = x;
    this->_pos_y = y;
    mvwprintw(win, this->_pos_y - 2, this->_pos_x + 2, this->_display.c_str());
} 