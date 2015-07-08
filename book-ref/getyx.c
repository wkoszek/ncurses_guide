#include <stdlib.h>
#include <ncurses.h>
#include <time.h>

int main(void)
{
	int r,x,row,col;

	initscr();
	srandom((unsigned)time(NULL));

	r = random();
	r %= 300;
	for(x=0;x<r;x++)
		addch('*');
	getyx(stdscr,row,col);
	printw("\nThe cursor ended up at location %d, %d.\n",\
		row,col);
	refresh();
	getch();

	endwin();
	return 0;
}

