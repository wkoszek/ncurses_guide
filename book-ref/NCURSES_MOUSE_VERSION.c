#include <ncurses.h>

int main(void)
{
	initscr();

	if(NCURSES_MOUSE_VERSION > 0)
			addstr("This version of Curses supports the mouse.\n");
	else
			addstr("This version of Curses does not support the mouse.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

