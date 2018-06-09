/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.Game.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:30:39 by root              #+#    #+#             */
/*   Updated: 2018/06/09 13:01:29 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/GameEntity.class.hpp"
#include "../headers/Player.class.hpp"
#include "../headers/Enemy.class.hpp"
#include "../headers/Bullet.class.hpp"


void    moveLeft(WINDOW *win, Player &_player) {
    int curX = _player.getX() - 2;
    if (curX > 0) {
        mvwaddch(win, _player.getY(), _player.getX(), ' ');
        mvwaddch(win, _player.getY(), _player.getX() + 1, ' ');
        mvwaddch(win, _player.getY(), _player.getX() + 2, ' ');
        mvwaddch(win, _player.getY(), _player.getX() + 3, ' ');
        mvwaddch(win, _player.getY(), _player.getX() + 4, ' ');
        _player.notTail(win);
        _player.setX(curX);
        box(win, '+', '+');
        mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
        refresh();
    }
}

void    moveRight(WINDOW *win, Player &_player, int max_x) {
    int curX = _player.getX() + 2;
            if (curX < max_x - 4) {
                mvwaddch(win, _player.getY(), _player.getX(), ' ');
                mvwaddch(win, _player.getY(), _player.getX() + 1, ' ');
                mvwaddch(win, _player.getY(), _player.getX() + 2, ' ');
                mvwaddch(win, _player.getY(), _player.getX() + 3, ' ');
                mvwaddch(win, _player.getY(), _player.getX() + 4, ' ');
                _player.notTail(win);
                _player.setX(curX);
                box(win, '+', '+');
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
}

void    moveUp(WINDOW *win, Player &_player) {
    int curY = _player.getY() - 2;
            if (curY - 1 > 0) {
                // mvwaddch(win, _player.getY(), _player.getX(), ' ');
                // mvwaddch(win, _player.getY(), _player.getX() + 1, ' ');
                // mvwaddch(win, _player.getY(), _player.getX() + 2, ' ');
                // mvwaddch(win, _player.getY(), _player.getX() + 3, ' ');
                // mvwaddch(win, _player.getY(), _player.getX() + 4, ' ');
                _player.notTail(win);
                _player.setY(curY);
                //box(win, '+', '+');
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }

}

void    moveDown(WINDOW *win, Player &_player, int max_y) {
    int curY = _player.getY() + 2;
            if (curY < max_y) {
                _player.notTail(win);
                _player.setY(curY);
                box(win, '+', '+');
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
}
void    bullet(WINDOW *win, Player &_player) {
    int bulletx = _player.getX();
    int bullety = _player.getY() - 1;
    mvwprintw(win, bulletx, bullety - 1, "*");
    }

void    startGame(WINDOW *win) {
    Player  _def;
    Player& _player(_def);
    Enemy _defenemy;
    Enemy& _enemy(_defenemy);
    Bullet _defbullet;
    Bullet& _bullet(_defbullet);
    nodelay(win, true);
    int     max_y;
    int     max_x;
    int     keyPressed;
    
    clear();
    getmaxyx(win, max_y, max_x);
    _player.setY(max_y-2);
    _player.setX(round(max_x/2)-2);
    box(win, '+', '+');
    mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
    keypad(win, TRUE);
    _enemy.setY(1);
    while(1) {
        _enemy.notTail(win);
        _enemy.setX(_enemy.randomXValue(max_x));
        _enemy.moveEnemy(win, max_x, max_y);
        keyPressed = wgetch(win);
        switch(keyPressed) {
            case KEY_UP:
                moveUp(win, _player);
                break;
            case KEY_DOWN:
                moveDown(win, _player, max_y);
                break;
            case ' ':
                bullet(win,_player);
                break;
            case KEY_LEFT:
                moveLeft(win, _player);
                break;
            case KEY_RIGHT:
                moveRight(win, _player, max_x);
                break;
            default:
                break;
        }
        usleep(100000);
        refresh();
    }
}