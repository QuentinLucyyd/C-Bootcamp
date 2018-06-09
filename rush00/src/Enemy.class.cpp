/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:14:24 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/09 16:30:57 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Enemy.class.hpp"

Enemy::Enemy(void): GameEntity() {
    this->_display = "<-X->";
    this->_pos_y = 1;
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
    srand(time(NULL));
    return(rand() % max_x - 1);
}

void Enemy::moveEnemy(WINDOW *win, int max_x, int max_y, int speed) {
    srand((int)time(0));
    // if ((rand() % 20) < 10) {
    //     this->_pos_x += -1;
    // } else {
    //     this->_pos_x += 1;
    // }
    this->notTail(win,6);
    this->setY(this->_pos_y + speed);
    if (this->_pos_x - 5 > 0 && this->_pos_x < max_x - 1) {
        mvwprintw(win, this->_pos_y, this->_pos_x, this->_display.c_str());
    }
    refresh();
}