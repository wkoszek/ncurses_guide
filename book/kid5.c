#include <curses.h>

int main()
{
	WINDOW *sonny;

	initscr();
	start_color();			/* remember to check for errors! */
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_RED,COLOR_YELLOW);

/* create subwindow / check for errors! */
	sonny = subwin(stdscr,5,20,10,30);

/* color windows and splash some text */
	bkgd(COLOR_PAIR(1));
	addstr("Hello, son.");
	wbkgd(sonny,COLOR_PAIR(2));
	waddstr(sonny,"Hello, Dad.");
	refresh();
	getch();

/* Stomp all over subwindow sonny */
	mvaddstr(9,0,"For score and seven years ago, our fathers\n");
	addstr("brought forth on this continent, a new nation,\n");
	addstr("conceived in Liberty, and dedicated to the proposition\n");
	addstr("that all men are created equal.\n");
	refresh();
	getch();

/* try to revive the subwindow */
	wclear(sonny);
	mvwaddstr(sonny,0,0,"I'm back!\n");
	wrefresh(sonny);
	getch();
	
	endwin();
	return 0;
}

