/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmanamel <qmanamel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 23:11:06 by root              #+#    #+#             */
/*   Updated: 2018/06/09 08:19:15 by qmanamel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int parent_x, parent_y;
    int score_size = 10;
    initscr();
    noecho();
    curs_set(FALSE);
    getmaxyx(stdscr, parent_y, parent_x);
    WINDOW *field = newwin(parent_y - score_size, parent_x, 0, 0);
    WINDOW *score = newwin(score_size, parent_x, parent_y - score_size, 0);
    mvwprintw(field, 0, 0, "Field");
    mvwprintw(score, 0, 0, "Score"); 
    box(field, '+', '+');
    box(score, '+', '+');
    wrefresh(field);
    wrefresh(score);
    sleep(5);
    delwin(field);
    delwin(score);
    endwin();
    return 0;
}