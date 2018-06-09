/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:14:24 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/09 11:37:34 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Enemy.class.hpp"

Enemy::Enemy(void): GameEntity() {
    this->_display = "<-X->";
    return ;
}

Enemy::Enemy(Enemy const &_new){
    *this = _new;    
}

Enemy::~Enemy(void){return ;}

Enemy &Enemy::operator=(Enemy const &_new) {
    this->_pos_x = _new._pos_x;
    this->_pos_y = _new._pos_y;
    this->_display = _new._display;
    return (*this);
}

int  Enemy::randomXValue(int max_x) {
    srand((int)time(0));
    int    random = rand() % max_x - 1;
    return (random);
}

void Enemy::moveEnemy(WINDOW *win, int max_x, int max_y) {
    if (this->getY() > max_y) {
        this->setY(this->_pos_y + 2);
    }
    mvwprintw(win, this->_pos_y, this->_pos_x, this->_display.c_str());
    refresh();
}