/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 20:58:35 by root              #+#    #+#             */
/*   Updated: 2018/06/10 13:03:05 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
#define BULLET_HPP

#include "GameEntity.class.hpp"

class Bullet: public GameEntity{
public:
    Bullet(void);
    Bullet(Bullet const&_new);
    ~Bullet(void);
    Bullet &operator=(Bullet const&_new);
    bool getState(void);
    void makeAlive(void);
    void remove(void);
    void moveBullet(WINDOW *win, int x, int y);
private:
    bool    isActive;
};

#endif
