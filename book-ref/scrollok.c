#include <ncurses.h>

int main(void)
{
	int x = 0;

	initscr();

	scrollok(stdscr,TRUE);
	while(1)
	{
		printw("%d\t",x);
		x++;
		refresh();
	}

	endwin();
	return 0;
}

