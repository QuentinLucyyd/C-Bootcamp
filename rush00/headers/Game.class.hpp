/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 11:35:05 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/10 12:53:29 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_HPP
#define GAME_CLASS_HPP

#include "Bullet.class.hpp"
#include "Player.class.hpp"

class Game {
public:
    Game(void);
    Game(Game const &_new);
    ~Game(void);
    Game &operator=(Game const &_new);
    void    addBullet(WINDOW *win, Player &_player);
    void    moveBullets(WINDOW *win);
private:
    Bullet  *_bullets;
    int     _max_bullets;
};

#endif