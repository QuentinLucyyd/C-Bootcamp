/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.Game.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:30:39 by root              #+#    #+#             */
/*   Updated: 2018/06/09 16:37:20 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/GameEntity.class.hpp"
#include "../headers/Player.class.hpp"
#include "../headers/Enemy.class.hpp"
#include "../headers/EnemyHorde.class.hpp"
#include <string>

void    moveLeft(WINDOW *win, Player &_player) {
    int curX = _player.getX() - 2;
    if (curX > 0) {
        _player.notTail(win,5);
        _player.setX(curX);
        mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
        refresh();
    }
}

void    moveRight(WINDOW *win, Player &_player, int max_x) {
    int curX = _player.getX() + 2;
            if (curX < max_x - 5) {
                _player.notTail(win,5);
                _player.setX(curX);
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
}

void    moveUp(WINDOW *win, Player &_player) {
    int curY = _player.getY() - 2;
            if (curY - 1 > 0) {
                _player.notTail(win,5);
                _player.setY(curY);
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
}

void    moveDown(WINDOW *win, Player &_player, int max_y) {
    int curY = _player.getY() + 2;
            if (curY < max_y) {
                _player.notTail(win,5);
                _player.setY(curY);
                mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
                refresh();
            }
} 

void    checkCollision(WINDOW *win, Player &_player) {
    chtype next = mvwinch(win, _player.getY() - 1, _player.getX() + 2);
    char n = (next & A_CHARTEXT);
    if (n == ' '){
        mvwaddstr(win, 5, 5, "No Collission");
    } else {
        if (n != '.' && n != '*' && n != '+'){

        }
        mvwaddstr(win, 5, 5, "There is Collission");
        mvwaddch(win, 10, 5, n);
    }
}

void    startGame(WINDOW *win) {
    int gameloop = 1;
    Player  _def;
    Player& _player(_def);
    Enemy _defenemy;
    Enemy& _enemy(_defenemy);
    Enemy _enemy2;
    Enemy *Enemies = new Enemy[5];
    nodelay(win, true);
    int     max_y;
    int     max_x;
    int     keyPressed;
    clear();
    getmaxyx(win, max_y, max_x);
    _player.setY(max_y-2);
    _player.setX(round(max_x/2)-2);
    EnemyHorde _enemies(5, max_x);
    //std::cout << "m/" << max_x << "y/" << max_y;
    box(win, '+', '+');
    mvprintw(_player.getY(), _player.getX(), _player.getDisplay().c_str());
    keypad(win, TRUE);
    // _enemy.setX(_enemy.randomXValue(max_x));
    // _enemy2.setX(_enemy2.randomXValue(max_x));
    //mvwprintw(win, 1, 1, std::to_string(_enemy.getX()).c_str());
    //mvwprintw(win, 5, 1, std::to_string(_enemy2.getX()).c_str());
    int p = -1;

    while (++p < 5) {
        int random = rand() % max_x - 1;
        Enemies[p].setX(random);
    }
    while(gameloop == 1) {
        //_enemies.moveEnemies(win, max_x, max_y);
        //_enemy.moveEnemy(win, max_x, max_y, 1);
        //_enemy2.moveEnemy(win, max_x, max_y, 1);
        p = -1;
        while (++p < 5) {
            Enemies[p].moveEnemy(win, max_x, max_y, 1);
        }
        keyPressed = wgetch(win);
        switch(keyPressed) {
            case KEY_UP:
                checkCollision(win, _player);
                moveUp(win, _player);
                break;
            case KEY_DOWN:
                checkCollision(win, _player);
                moveDown(win, _player, max_y);
                break;
            case KEY_LEFT:
                checkCollision(win, _player);
                moveLeft(win, _player);
                break;
            case KEY_RIGHT:
                checkCollision(win, _player);
                moveRight(win, _player, max_x);
                break;
            default:
                checkCollision(win, _player);
                break;
        }
        usleep(100000);
        box(win, '+', '+');
        refresh();
    }
}