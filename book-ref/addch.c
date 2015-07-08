#include <ncurses.h>

int main(void)
{
	initscr();

	addch('H');
	addch('i');
	addch('!');
	refresh();
	getch();

	endwin();
	return 0;
}

