/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 19:18:47 by qmanamel          #+#    #+#             */
/*   Updated: 2018/06/10 13:16:08 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/GameEntity.class.hpp"
#include "../headers/Player.class.hpp"
#include "../headers/Screen.class.hpp"

void startMenu(WINDOW *win, int parent_y, int parent_x) {
    int x,y;
    y = round(parent_y / 2);
    x = round(parent_x / 2);
    wmove(win,y, x - 10);
    std::cout << y << "/" << x;
    std::string text = "Ft Retro";
    std::string subtext = "Press the Enter key to continue";
    for(int i = 0; i < text.size(); i++) {
        waddch(win,text[i]);
        waddch(win,' ');
    }
    wmove(win, y + 2, x - 25);
    for(int i = 0; i < subtext.size(); i++) {
        waddch(win,subtext[i]);
        waddch(win,' ');
   }
}

void    initialize(){
    initscr();
    noecho();
    curs_set(FALSE);
}

int     main() {  
    int parent_x, parent_y;
    int score_size = 10;
    initialize();
    getmaxyx(stdscr, parent_y, parent_x);
    WINDOW *field = newwin(parent_y - score_size, parent_x, 0, 0);
    WINDOW *score = newwin(score_size, parent_x, parent_y - score_size, 0);
    nodelay(field, true);
    keypad(field, TRUE);
    mvwprintw(score, 1, 2, "Score"); 
    box(field, '+', '+');
    box(score, '+', '+');
    startMenu(field, parent_y - score_size, parent_x);
    getch();
    startGame(field, score);
    wrefresh(field);
    wrefresh(score);
    box(score, '+', '+');
    sleep(5);
    delwin(field);
    delwin(score);
    endwin();
}
     