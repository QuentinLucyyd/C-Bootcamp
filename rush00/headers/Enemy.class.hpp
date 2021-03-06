/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:12:16 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/10 14:00:14 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "GameEntity.class.hpp"

class Enemy: public GameEntity{
public:
    Enemy(void);
    Enemy(Enemy const &_new);
    ~Enemy(void);
    Enemy &operator=(Enemy const &_new);
    int   randomXValue(int max_x);
    bool  checkBullet(WINDOW *win);
    void  moveEnemy(WINDOW *win, int max_x, int max_y, int speed);
private:
    bool    isAlive;
};

#endif