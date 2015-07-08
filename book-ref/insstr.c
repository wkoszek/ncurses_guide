#include <ncurses.h>

int main(void)
{
	int y,x,a,b;
	char s[] = "Excuse me while I squeeze in here!";

	initscr();

	getmaxyx(stdscr,y,x);
	x >>= 1;				/* cut x in half*/
	for(a=0;a<y;a++)
	{
		for(b=0;b<x;b++)
			addch('.');
		addch('\n');
	}
	refresh();
	getch();

	mvinsstr(5,10,s);
	refresh();
	getch();

	endwin();
	return 0;
}

