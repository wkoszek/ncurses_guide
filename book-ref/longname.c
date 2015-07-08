#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("Here is the longname() information:\n");
	addstr(longname());
	refresh();
	getch();

	endwin();
	return 0;
}

