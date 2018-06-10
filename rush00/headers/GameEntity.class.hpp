/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GameEntity.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:03:59 by root              #+#    #+#             */
/*   Updated: 2018/06/10 13:59:55 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_ENTITY_HPP
#define GAME_ENTITY_HPP

#include <ncurses.h>
#include <iostream>
#include <unistd.h>
#include <cmath>
#include <pthread.h>

class GameEntity {
public:
    GameEntity(void);
    GameEntity(GameEntity const &_new);
    ~GameEntity(void);
    GameEntity& operator=(GameEntity const &_rhs);
    std::string getDisplay(void);
    void        notTail(WINDOW *win, int width);
    int         takeDamage(int damage);
    void        setX(int x);
    void        setY(int y);
    int         getX(void);
    int         getY(void);
    int         getHP(void);
    bool        isAlive(void);
protected:
    int         _pos_x;
    int         _pos_y;
    int         _hitPoints;
    std::string _display;
};

void    startGame(WINDOW *win,WINDOW *score);    
#endif

//Defualt Class for each Game Entity
// Containng Co-ordinates and Display Charecter