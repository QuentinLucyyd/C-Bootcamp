/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.Game.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:30:39 by root              #+#    #+#             */
/*   Updated: 2018/06/10 13:12:47 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/GameEntity.class.hpp"
#include "../headers/Player.class.hpp"
#include "../headers/Enemy.class.hpp"
#include "../headers/EnemyHorde.class.hpp"
#include "../headers/Star.class.hpp"
#include "../headers/Bullet.class.hpp"
#include "../headers/Game.class.hpp"
#include <string>

void    moveLeft(WINDOW *win, Player &_player) {
    int curX = _player.getX() - 2;
    if (curX > 0) {
        _player.notTail(win,5);
        _player.setX(curX);
        mvwprintw(win,_player.getY(), _player.getX(), _player.getDisplay().c_str());
        wrefresh(win);
    }
}

void    moveRight(WINDOW *win, Player &_player, int max_x) {
    int curX = _player.getX() + 2;
            if (curX < max_x - 5) {
                _player.notTail(win,5);
                _player.setX(curX);
                mvwprintw(win,_player.getY(), _player.getX(), _player.getDisplay().c_str());
                wrefresh(win);
            }
}

void    moveUp(WINDOW *win, Player &_player) {
    int curY = _player.getY() - 2;
            if (curY - 1 > 0) {
                _player.notTail(win,5);
                _player.setY(curY);
                mvwprintw(win,_player.getY(), _player.getX(), _player.getDisplay().c_str());
                wrefresh(win);
            }
}

void    moveDown(WINDOW *win, Player &_player, int max_y) {
    int curY = _player.getY() + 2;
            if (curY < max_y) {
                _player.notTail(win,5);
                _player.setY(curY);
                mvwprintw(win,_player.getY(), _player.getX(), _player.getDisplay().c_str());
                wrefresh(win);
            }
} 

int    checkCollision(WINDOW *win, Player &_player) {
    chtype left_wing = mvwinch(win, _player.getY() - 1, _player.getX());
    chtype right_wing = mvwinch(win, _player.getY() - 1, _player.getX() + 4);
    chtype center = mvwinch(win, _player.getY() - 1, _player.getX() + 2);
    char n_left = (left_wing & A_CHARTEXT);
    char n_right = (right_wing & A_CHARTEXT);
    char n_center = (center & A_CHARTEXT);
    if (n_left == ' ' && n_right == ' ' && n_center == ' '){
        //mvwaddstr(win, 5, 5, "No Collission");
        return 1;
    } else {
        if ((n_left != '.' && n_left != '*' && n_left != '+') && 
        (n_right != '.' && n_right != '*' && n_right != '+') && 
        (n_center != '.' && n_center != '*' && n_center != '+')){
            if (_player.getHP() == 0) {
                mvwaddstr(win, 5, 5, "Now He is Finally Dead");
                _player.notTail(win, 6);
                return -1;
            } else {
                _player.takeDamage(1);
            }
        }
    }
    return 1;
}

// void    addBullet(WINDOW *win, int cur_bullet, Player &_player) {
//     _bullets[cur_bullet].setX(_player.getX() + 3);
//     _bullets[cur_bullet].setY(_player.getY() - 1);
//     mvwprintw(win,  _bullets[cur_bullet].getY(),  _bullets[cur_bullet].getX(),  _bullets[cur_bullet].getDisplay().c_str());
// }

// void    moveBullets(WINDOW *win, int _bullet){
//     int i = -1;
//     while (++i < _bullet) {
//         // mvwprintw(win, 2, 2, std::to_string( _bullets[i]->getX()).c_str());
//         // mvwprintw(win, 4, 4, std::to_string( _bullets[i]->getY()).c_str());
//         if (_bullets[_bullet].getY() > 0) {
//             mvwaddch(win, _bullets[_bullet].getY(), _bullets[_bullet].getX(), ' ');
//             _bullets[_bullet].setY(_bullets[_bullet].getY() - 2);
//             mvwprintw(win, _bullets[_bullet].getY(),  _bullets[_bullet].getX(),  _bullets[_bullet].getDisplay().c_str());
//         }
//     }
// }

void    startGame(WINDOW *win, WINDOW *score) {
    Game    GameOperator;
    int Frame = 0;
    Player  _def;
    Player& _player(_def);
    Enemy   *Enemies = new Enemy[5];
    int     max_y;
    int     max_x;
    int     keyPressed;
    wclear(win);
    getmaxyx(win, max_y, max_x);
    _player.setY(max_y-2);
    _player.setX(round(max_x/2)-2);
    Star    *_stars = new Star[50];
    EnemyHorde _enemies(10, max_x);
    std::cout << "m/" << max_x << "y/" << max_y;
    box(win, '+', '+');
    mvwprintw(win,_player.getY(), _player.getX(), _player.getDisplay().c_str());
    int p = -1;
    while (++p < 10) {
        int randomx = rand() % max_x - 1;
        int randomy = rand() % max_y;
        Enemies[p].setX(randomx);
        Enemies[p].setY(randomy);
    }
    int st = -1;
    while(++st < 50) {
        int randomx = rand() % max_x -1;
        int randomy = rand() % max_y -1;
        _stars[st].setX(randomx);
        _stars[st].setY(randomy);
    }
    while(_player.isAlive()) {
        int st = -1;
        while(++st < 50) {
            mvwaddch(win, _stars[st].getY(), _stars[st].getX(), ' ');
            if (_stars[st].getY() > max_y) {
                _stars[st].setY(1);
            }
            _stars[st].setY(_stars[st].getY() + 1);
            mvwaddch(win, _stars[st].getY(), _stars[st].getX(), '.');                       
        }
        _enemies.moveEnemies(win, max_x, max_y);
        keyPressed = wgetch(win);
        checkCollision(win,_player);
        GameOperator.moveBullets(win);

            switch(keyPressed) {
                case 'z':
                    GameOperator.addBullet(win,_player);
                    break;
                case KEY_UP:
                    moveUp(win, _player);
                    break;
                case KEY_DOWN:
                    moveDown(win, _player, max_y);
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
        Frame++;
        mvwprintw(score, 4, 2, "Frames Rendered: ");
        mvwprintw(score, 4, 19, std::to_string(Frame).c_str());
        mvwprintw(score, 6, 2, "Lives: ");
        mvwprintw(score, 6, 9, std::to_string(_player.getHP()).c_str());
        usleep(90000);
        box(win, '+', '+');
        wrefresh(win);
        wrefresh(score);
    }
    _player.notTail(win, 5);
}