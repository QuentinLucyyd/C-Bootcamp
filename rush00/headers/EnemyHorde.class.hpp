/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyHorde.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:31:17 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/09 14:01:12 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HORDE_HPP
#define ENEMY_HORDE_HPP
#include "GameEntity.class.hpp"
#include "Enemy.class.hpp"

class EnemyHorde{
    public:
        EnemyHorde(void);
        EnemyHorde(int n, int max_x);
        EnemyHorde(EnemyHorde const &_new);
        ~EnemyHorde(void);
        EnemyHorde &operator=(EnemyHorde const &_new);
        void    moveEnemies(WINDOW *win, int max_x, int max_y);
        void    moveEnemy(int n, WINDOW *win, int max_x, int max_y);
    private:
        int     length;
        Enemy   *_enemies;
};

#endif