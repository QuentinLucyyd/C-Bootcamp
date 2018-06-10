/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 11:41:26 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/10 13:28:13 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Game.class.hpp"

Game::Game(void){
    this->_bullets = new Bullet[50];
    this->_max_bullets = 50;
}

Game::Game(Game const &_new){
    *this = _new;
}

Game::~Game(void) {return ;}

Game &Game::operator=(Game const &_new){
    this->_bullets = _new._bullets;
    this->_max_bullets = _new._max_bullets;
    return (*this);
}

void    Game::addBullet(WINDOW *win, Player &_player) {
    int i = -1;
    while (++i < this->_max_bullets) {
        if (_bullets[i].getState() == false){
            _bullets[i].makeAlive();
            _bullets[i].setY(_player.getY() - 1);
            _bullets[i].setX(_player.getX() + 3);
            return ;
        }
    }
}

void    Game::moveBullets(WINDOW *win){
    int i = -1;
    chtype  collisionCheck;
    char    nextColide;

    while (++i < this->_max_bullets) {
        if (_bullets[i].getState()){
            mvwaddch(win, this->_bullets[i].getY(), this->_bullets[i].getX(), ' ');
            this->_bullets[i].setY(this->_bullets[i].getY() - 1);
            collisionCheck = mvwinch(win, this->_bullets[i].getY(), this->_bullets[i].getX());
            nextColide = (collisionCheck & A_CHARTEXT);
                mvwaddch(win, 2, 2, nextColide);
            if (nextColide != '.' || nextColide != ' ' || nextColide != '+') {
                mvwprintw(win, this->_bullets[i].getY(),  this->_bullets[i].getX(),  this->_bullets[i].getDisplay().c_str());
            } else {
                this->_bullets[i].remove();
            }
        }
    }
}