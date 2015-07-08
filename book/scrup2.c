#include <curses.h>

int main()
{
	initscr();
	int maxy,maxx,y;

	getmaxyx(stdscr,maxy,maxx);
	scrollok(stdscr,TRUE);

	for(y=0;y<=maxy;y++)
			mvprintw(y,0,"This is boring text written to line %d.",y);
	refresh();
	getch();
	
	wscrl(stdscr,3);
	refresh();
	getch();

	endwin();
	return 0;
}

