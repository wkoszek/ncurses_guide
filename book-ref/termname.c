#include <ncurses.h>

int main(void)
{
	initscr();

	printw("The term name is %s.\n",termname());
	refresh();
	getch();

	endwin();
	return 0;
}

