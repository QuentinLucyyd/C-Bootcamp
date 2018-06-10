/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:14:24 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/10 06:24:06 by root             ###   ########.fr       */
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
    return(rand() % max_x - 1);
}

void Enemy::moveEnemy(WINDOW *win, int max_x, int max_y, int speed) {
    if ((rand() % 20) < 10) {
        this->_pos_x += -1;
    } else {
        this->_pos_x += 1;
    }
    this->notTail(win,6);
    if (this->_pos_y >= max_y) {
        int randomx = rand() % max_x - 1;
        int randomy = rand() % 3;
        this->setY(randomy);
        this->setX(randomx);
        this->setY(1);
    } else {
        this->setY(this->_pos_y + speed);
    }
    mvwprintw(win, 10, 10, std::to_string(this->_pos_x).c_str());
    chtype left_end = mvwinch(win, this->_pos_y, this->_pos_x-1);
    chtype right_end = mvwinch(win, this->_pos_y, this->_pos_x+5);
    char nl = (left_end & A_CHARTEXT);
    char nr = (right_end & A_CHARTEXT);
    if (this->_pos_x + 4 < max_x && this->_pos_x > 0 && nl != '>' && nr != '<') {
        mvwprintw(win, this->_pos_y, this->_pos_x, this->_display.c_str());
    }
    wrefresh(win);
}