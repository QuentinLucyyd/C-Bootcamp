/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Star.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 21:04:05 by root              #+#    #+#             */
/*   Updated: 2018/06/10 08:18:13 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Star.class.hpp"

Star::Star(void): GameEntity(){
    this->_display = '.';
    return ;
}

Star::Star(int max_x){
    int random = rand() % max_x -1;
    this->_display = '.';
    this->_pos_y = 1;
    this->_pos_x = random;
    return ;
}

Star::Star(Star const&_new){
    *this = _new;
}

Star::~Star(void){return ;}

Star &Star::operator=(Star const&_new){
    this->_display = _new._display;
    this->_pos_x = _new._pos_x;
    this->_pos_y = _new._pos_y;
    return (*this);
}

void Star::moveStar(WINDOW *win, int direction){
    mvwaddch(win, this->_pos_y, this->_pos_x, ' ');
    this->_pos_y += 1;
    mvwaddch(win, this->_pos_y, this->_pos_x, '.');
}