/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 11:35:05 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/10 15:30:31 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_CLASS_HPP
#define GAME_CLASS_HPP

#include "Bullet.class.hpp"
#include "Player.class.hpp"
#include "Star.class.hpp"


class Game {
public:
    Game(void);
    Game(Game const &_new);
    ~Game(void);
    Game &operator=(Game const &_new);
    void    addBullet(WINDOW *win, Player &_player);
    void    moveBullets(WINDOW *win);
    void    setStars(int maxX, int maxY);
    void    moveStars(WINDOW *win, int maxX, int maxY);
    void    setScoreBoard(WINDOW *win);
    void    setMainScreen(WINDOW *win);
    WINDOW  *getScoreBoard(void);
    WINDOW  *getMainScreen(void);
private:
    Bullet  *_bullets;
    Star    *_stars;
    int     _max_stars;
    int     _max_bullets;
    WINDOW  *scoreBoard;
    WINDOW  *mainScreen;
};

#endif