/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 19:18:47 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/09 14:18:32 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./headers/GameEntity.class.hpp"
#include "./headers/Player.class.hpp"
#include "./headers/Screen.class.hpp"

void startMenu(int y, int x) {
    move(y, x - 10);
    std::cout << y << "/" << x;
    std::string text = "Ft Retro";
    std::string subtext = "Press any key to continue";
    for(int i = 0; i < text.size(); i++) {
        addch(text[i]);
        addch(' ');
    }
    move(y + 2, x - 25);
    for(int i = 0; i < subtext.size(); i++) {
       addch(subtext[i]);
       addch(' ');
   }
}

void    initialize(void){
    initscr();
    noecho();
    curs_set(FALSE);
}

int     main(int argc, char *argv[]) {
        WINDOW *score;
        initialize();
        int x, y;

        getmaxyx(stdscr, y, x);
        score = newwin(y, x, 0,0);
        wresize(stdscr, y - 5, x);
        box(score, '+', '+');
        box(stdscr, '+', '+');
        mvwprintw(score, 0, 0, "Score"); 
        refresh();
        y = round(y / 2);
        x = round(x / 2);
        startMenu(y, x);
        int k = getch();
        std::cout << "|" << k;
        if (k == 27) {
            endwin();
        } else {
            startGame(stdscr);
            endwin();
        }
    }
     