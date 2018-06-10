/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.Game.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:30:39 by root              #+#    #+#             */
/*   Updated: 2018/06/10 15:33:00 by qmanamel         ###   ########.fr       */
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

void    startGame(WINDOW *win, WINDOW *score) {
    Game    GameOperator;

    GameOperator.setScoreBoard(score);
    GameOperator.setMainScreen(win);

    int Frame = 0;
    Player  _def;
    Player& _player(_def);
    Enemy   *Enemies = new Enemy[5];
    int     max_y;
    int     max_x;
    int     keyPressed;
    
    wclear(GameOperator.getMainScreen());
    getmaxyx(GameOperator.getMainScreen(), max_y, max_x);
    _player.setY(max_y-2);
    _player.setX(round(max_x/2)-2);
    EnemyHorde _enemies(10, max_x);
    box(GameOperator.getMainScreen(), '+', '+');
    mvwprintw(GameOperator.getMainScreen(),_player.getY(), _player.getX(), _player.getDisplay().c_str());
    int p = -1;
    while (++p < 10) {
        int randomx = rand() % max_x - 1;
        int randomy = rand() % max_y;
        Enemies[p].setX(randomx);
        Enemies[p].setY(randomy);
    }
    GameOperator.setStars(max_x, max_y);
    while(_player.isAlive()) {
        GameOperator.moveStars(GameOperator.getMainScreen(), max_x, max_y);
        _enemies.moveEnemies(GameOperator.getMainScreen(), max_x, max_y);
        keyPressed = wgetch(GameOperator.getMainScreen());
        _player.checkCollision(GameOperator.getMainScreen());
        GameOperator.moveBullets(GameOperator.getMainScreen());
        switch(keyPressed) {
            case 'z':
			    GameOperator.addBullet(GameOperator.getMainScreen(),_player);
			    break;
        }
        _player.movePlayer(GameOperator.getMainScreen(), keyPressed, max_x, max_y);
        Frame++;
        mvwprintw(GameOperator.getScoreBoard(), 4, 2, "Frames Rendered: ");
        mvwprintw(GameOperator.getScoreBoard(), 4, 19, std::to_string(Frame).c_str());
        mvwprintw(GameOperator.getScoreBoard(), 6, 2, "Lives: ");
        mvwprintw(GameOperator.getScoreBoard(), 6, 9, std::to_string(_player.getHP()).c_str());
        usleep(80000);
        box(GameOperator.getMainScreen(), '+', '+');
        wrefresh(GameOperator.getMainScreen());
        wrefresh(GameOperator.getScoreBoard());
    }
    _player.notTail(GameOperator.getMainScreen(), 5);
}