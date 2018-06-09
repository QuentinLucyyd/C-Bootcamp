/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.Game.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:30:39 by root              #+#    #+#             */
/*   Updated: 2018/06/09 09:42:46 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/GameEntity.class.hpp"
#include "../headers/Player.class.hpp"

void    *startGame(void *window) {
    Player  _player;
    int     max_y;
    int     max_x;
    int     keyPressed;
    clear();
    WINDOW *win = (WINDOW *)window;
    getmaxyx(win, max_y, max_x);
    _player.setY(max_y-2);
    _player.setX(round(max_x/2)-2);
    std::cout << "m/" << max_x << "y/" << max_y;
    box(win, '+', '+');
    mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
    keypad(win, TRUE);
    while(1) {
        keyPressed = getch();
        if(keyPressed == KEY_LEFT) {
            int curX = _player.getX() - 2;
            if (curX > 0) {
                _player.setX(curX);
                clear();
                box(win, '+', '+');
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
        } else if(keyPressed == KEY_RIGHT) {
            int curX = _player.getX() + 2;
            if (curX < max_x - 4) {
                _player.setX(curX);
                clear();
                box(win, '+', '+');
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
        } else if(keyPressed == KEY_UP) {
            int curY = _player.getY() - 2;
            if (curY - 1 > 0) {
                _player.setY(curY);
                clear();
                box(win, '+', '+');
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
        } else if(keyPressed == KEY_DOWN) {
            int curY = _player.getY() + 2;
            if (curY < max_y) {
                _player.setY(curY);
                clear();
                box(win, '+', '+');
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
        } else if (keyPressed == KEY_BACKSPACE) {
            endwin();
        }
    }
}