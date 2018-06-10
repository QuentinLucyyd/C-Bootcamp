/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Star.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 20:58:35 by root              #+#    #+#             */
/*   Updated: 2018/06/10 12:03:51 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Star_HPP
#define Star_HPP

#include "GameEntity.class.hpp"

class Star: public GameEntity{
public:
    Star(void);
    Star(int max_x);
    Star(Star const&_new);
    ~Star(void);
    Star &operator=(Star const&_new);
    void moveStar(WINDOW *win);    
};

#endif
