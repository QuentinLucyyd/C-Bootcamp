/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 20:58:35 by root              #+#    #+#             */
/*   Updated: 2018/06/10 06:37:52 by root             ###   ########.fr       */
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
    void moveBullet(WINDOW *win, int direction, int x, int y, int max_y);    
};

#endif
