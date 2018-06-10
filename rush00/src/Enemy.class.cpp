/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:14:24 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/10 14:09:11 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Enemy.class.hpp"

Enemy::Enemy(void): GameEntity() {
    this->_display = "<-X->";
    this->_pos_y = 1;
    this->isAlive = true;
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
    this->isAlive = _new.isAlive;
    return (*this);
}

int  Enemy::randomXValue(int max_x) {
    return(rand() % max_x - 1);
}

bool Enemy::checkBullet(WINDOW *win) {
    chtype f1 = mvwinch(win, this->_pos_y + 1, this->_pos_x);
    chtype f2 = mvwinch(win, this->_pos_y + 1, this->_pos_x + 2);
    chtype f3 = mvwinch(win, this->_pos_y + 1, this->_pos_x + 3);
    chtype f4 = mvwinch(win, this->_pos_y + 1, this->_pos_x + 4);
    chtype f5 = mvwinch(win, this->_pos_y + 1, this->_pos_x + 5);


    char cf1 = (f1 & A_CHARTEXT);
    char cf2 = (f2 & A_CHARTEXT);
    char cf3 = (f3 & A_CHARTEXT);
    char cf4 = (f4 & A_CHARTEXT);
    char cf5 = (f5 & A_CHARTEXT);
    
    if (cf1 == '*' || cf2 == '*' || cf3 == '*' || cf4 == '*' || cf5 == '*') {
        return true; 
    }
    return false;
}

void Enemy::moveEnemy(WINDOW *win, int max_x, int max_y, int speed) {
    if (this->isAlive) {
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
        chtype left_end = mvwinch(win, this->_pos_y, this->_pos_x -1);
        chtype right_end = mvwinch(win, this->_pos_y, this->_pos_x + 5);

        char nl = (left_end & A_CHARTEXT);
        char nr = (right_end & A_CHARTEXT);
        if (this->checkBullet(win)) {
            this->isAlive = false;
        } else {
            if (this->_pos_x + 4 < max_x && this->_pos_x > 0 && nl != '>' && nr != '<') {
            mvwprintw(win, this->_pos_y, this->_pos_x, this->_display.c_str());
        }
        }
    }
}