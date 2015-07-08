#include <ncurses.h>

int main(void)
{
	initscr();

	printw("This window is %d lines by %d columns.\n",\
		LINES,COLS);
	refresh();
	getch();

	endwin();
	return 0;
}

