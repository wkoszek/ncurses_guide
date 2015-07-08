#include <ncurses.h>

int main(void)
{
	int r;
	initscr();

/* Write some text to the entire window */
	for(r=0;r<LINES;r++)
		mvprintw(r,0,\
			"This is the fabulous row %d on the standard screen.",r);

/* Update every other line */
	for(r=0;r<LINES;r+=2)
	{
		wtouchln(stdscr,r,1,1);
		wtouchln(stdscr,r+1,1,0);
	}
	refresh();
	getch();

	endwin();
	return 0;
}

