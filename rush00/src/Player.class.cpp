/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:22:24 by root              #+#    #+#             */
/*   Updated: 2018/06/10 15:11:01 by qmanamel         ###   ########.fr       */
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

void    Player::checkCollision(WINDOW *win) {
	chtype col1 = mvwinch(win, this->_pos_y - 1, this->_pos_x);
	chtype col2 = mvwinch(win, this->_pos_y - 1, this->_pos_x + 2);
	chtype col3 = mvwinch(win, this->_pos_y - 1, this->_pos_x + 4);



	char colc1 = (col1 & A_CHARTEXT);
	char colc2 = (col2 & A_CHARTEXT);
	char colc3 = (col3 & A_CHARTEXT);
	
	if (((colc1 == '<' || colc1 == 'X' || colc1 == '-' || colc1 == '>') || 
		(colc2 == '<' || colc2 == 'X' || colc2 == '-' || colc2 == '>') || 
		(colc3 == '<' || colc3 == 'X' || colc3 == '-' || colc3 == '>'))){
			this->takeDamage(1);
	}
}

void    Player::moveLeft(WINDOW *win) {
	int curX = this->_pos_x - 2;
    if (curX > 0) {
        this->notTail(win,5);
        this->setX(curX);
        mvwprintw(win,this->getY(), this->getX(), this->getDisplay().c_str());
        wrefresh(win);
    }
}

void    Player::moveRight(WINDOW *win,int max_x){
	int curX = this->_pos_x + 2;
	if (curX < max_x - 5) {
		this->notTail(win,5);
		this->setX(curX);
		mvwprintw(win,this->getY(), this->getX(), this->getDisplay().c_str());
		wrefresh(win);
	}
}

void    Player::moveUp(WINDOW *win){
	int curY = this->_pos_y - 2;
	if (curY - 1 > 0) {
		this->notTail(win,5);
		this->setY(curY);
		 mvwprintw(win,this->getY(), this->getX(), this->getDisplay().c_str());
		 wrefresh(win);
	}
}

void    Player::moveDown(WINDOW *win,int max_y){
	int curY = this->_pos_y + 2;
	if (curY < max_y) {
		this->notTail(win,5);
		this->setY(curY);
		mvwprintw(win,this->getY(), this->getX(), this->getDisplay().c_str());
		wrefresh(win);
	}
}

void    Player::movePlayer(WINDOW *win, int keyPressed, int max_x, int max_y){
	switch(keyPressed) {
		case KEY_UP:
			this->moveUp(win);
            break;
		case KEY_DOWN:
			this->moveDown(win, max_y);
            break;
		case KEY_LEFT:
			this->moveLeft(win);
			break;
		case KEY_RIGHT:
			this->moveRight(win, max_x);
			break;
		default:
			break;
	} 
}
