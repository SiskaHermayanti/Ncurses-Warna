#include <iostream>
#include <ncurses.h>
#include <windows.h>

using namespace std;

int main(){
	initscr();
	
	start_color();
	init_pair(1,COLOR_BLUE,COLOR_CYAN);
	init_pair(2,COLOR_RED,COLOR_YELLOW);
	init_pair(3,COLOR_WHITE,COLOR_MAGENTA);
	init_pair(4,COLOR_BLACK,COLOR_YELLOW);
	
	attron(COLOR_PAIR(1));
	mvprintw(2,5,"HALLO!");
	refresh();
	
	Sleep(1000);
	clear();
	
	attron(COLOR_PAIR(2));
	mvprintw(5,10,"whatever you do in life");
	refresh();
	
	Sleep(1000);
	clear();
	
	attron(COLOR_PAIR(3));
	mvprintw(8,15,"make sure it makes you HAPPY!!!");
	refresh();	
	Sleep(1000);
	clear();
	
	attron(COLOR_PAIR(4));
	mvprintw(10,25," O     O ");
	mvprintw(11,25,"    >    ");
	mvprintw(12,25,"  *+++*  ");
	
	getch();
	endwin();
}
