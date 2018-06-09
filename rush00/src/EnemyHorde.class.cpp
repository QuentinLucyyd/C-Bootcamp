/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyHorde.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:34:07 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/09 14:47:01 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/EnemyHorde.class.hpp"

EnemyHorde::EnemyHorde(void) {return ;}

EnemyHorde::EnemyHorde(int n, int max_x) {
    this->_enemies = new Enemy[n];
    this->length = n;
    int     i;

    i = -1;
    while(++i < n) {
        srand((int)time(0));
        int random = rand() % max_x;
        _enemies[i].setX(random);
    }
}

EnemyHorde::EnemyHorde(EnemyHorde const &_new){
    *this = _new;
}

EnemyHorde::~EnemyHorde(void){return ;}

EnemyHorde &EnemyHorde::operator=(EnemyHorde const &_new){
    this->_enemies = _new._enemies;
    this->length = _new.length;
    return (*this);
}

void    EnemyHorde::moveEnemies(WINDOW *win, int max_x, int max_y) {
    int     i;

    i = -1;
    while(++i < this->length) {
        mvwprintw(win, 5, 1, std::to_string(this->_enemies[i].getX()).c_str());
        this->_enemies[i].moveEnemy(win, max_x, max_y, 1);
    }
}

void    EnemyHorde::moveEnemy(int n, WINDOW *win, int max_x, int max_y) {
    if (n < this->length){
        this->_enemies[n].moveEnemy(win, max_x, max_y, 1);
    }
}
