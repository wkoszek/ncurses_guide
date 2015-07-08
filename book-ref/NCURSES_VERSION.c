#include <ncurses.h>

int main(void)
{
	initscr();

#ifdef NCURSES_VERSION
	printw("This is NCurses version %s.%d.\n",\
			NCURSES_VERSION,NCURSES_VERSION_PATCH);
#else
	printw("You are apparently not using NCruses.\n");
#endif
	refresh();
	getch();

	endwin();
	return 0;
}

