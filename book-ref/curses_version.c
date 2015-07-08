#include <ncurses.h>

int main(void)
{
	initscr();

#ifdef NCURSES_VERSION
	printw("This is %s.\n",curses_version());
#else
	printw("You are apparently not using NCruses.\n");
#endif
	refresh();
	getch();

	endwin();
	return 0;
}

