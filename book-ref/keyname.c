#include <ncurses.h>

int main(void)
{
	int c;
	
	initscr();

	for(c=0;c<255;c++)
		printw("%-5s",keyname(c));

	refresh();
	getch();

	endwin();
	return 0;
}

