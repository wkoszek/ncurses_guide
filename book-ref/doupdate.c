#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("The screen has been updated thanks to the\n");
	addstr("wnoutrefresh() and doupdate() functions.\n");
	wnoutrefresh(stdscr);
	doupdate();
	getch();

	endwin();
	return 0;
}

