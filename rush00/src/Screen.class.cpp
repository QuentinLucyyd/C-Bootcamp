/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:28:33 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/09 08:53:44 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Screen.class.hpp"

Screen::Screen(void){return ;}

Screen::Screen(Screen const &_new){
    *this = _new;
}

Screen::~Screen(void){return ;}

Screen  &Screen::operator=(Screen const &_new){
    this->_screen = _new._screen;
    this->maxX = _new.maxX;
    this->maxY = _new.maxY;
    return (*this);
}

void    Screen::setScreen(WINDOW *screen){
    this->_screen = screen;
}

WINDOW  *Screen::getScreen(){
    return (this->_screen);
}

void    Screen::createBox(void){
    box(this->_screen, '+', '+');
}

void    Screen::setMaxYX(int y, int x){
    this->maxY = y;
    this->maxX = x;
}

int     Screen::getY(void) {
    return (this->maxY);
}

int     Screen::getX(void) {
    return (this->maxX);
}