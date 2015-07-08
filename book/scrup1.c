#include <curses.h>

int main()
{
	int maxy,maxx,y;
	initscr();

	getmaxyx(stdscr,maxy,maxx);
	scrollok(stdscr,TRUE);

	for(y=0;y<=maxy;y++)
			mvprintw(y,0,"This is boring text written to line %d.",y);
	refresh();
	getch();
	
	scroll(stdscr);
	refresh();
	getch();

	endwin();
	return 0;
}

