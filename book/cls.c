#include <curses.h>

int main(void)
{
	initscr();
	refresh();

	endwin();
	return 0;
}

