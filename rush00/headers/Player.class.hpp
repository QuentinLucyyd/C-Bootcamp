/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:19:19 by root              #+#    #+#             */
/*   Updated: 2018/06/10 15:02:58 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "GameEntity.class.hpp"

class Player: public GameEntity {
public:
    Player(void);
    Player(Player const &_new);
    Player(std::string display);
    ~Player(void);
    Player &operator=(Player const &_rhs);
    void    checkCollision(WINDOW *win);
    void    moveLeft(WINDOW *win);
    void    moveRight(WINDOW *win,int max_x);
    void    moveUp(WINDOW *win);
    void    moveDown(WINDOW *win,int max_y);
    void    movePlayer(WINDOW *win, int keyPressed, int max_x, int max_y);
};

#endif
