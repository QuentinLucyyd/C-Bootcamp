/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 08:24:30 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/10 08:33:37 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCREEN_CLASS_HPP
#define SCREEN_CLASS_HPP
#include "GameEntity.class.hpp"

class Screen{
    public:
        Screen(void);
        Screen(WINDOW *_win);
        Screen(Screen const &_new);
        ~Screen(void);

        Screen  &operator=(Screen const &_new);
        void    setScreen(WINDOW *screen);
        void    createBox(void);
        void    setMaxYX(int y, int x);
        int     getY(void);
        int     getX(void);
        WINDOW  *getScreen();
    private:
        WINDOW  *_screen;
        int     maxY;
        int     maxX;
};

#endif