#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("Now you're in Curses.\n");
	refresh();
	getch();

	endwin();

	fputs("Now you're not in Curses.\n",stdout);
	fflush(stdout);
	getch();

	addstr("Now you're back in Curses again.\n");
	refresh();
	getch();
	
	endwin();
	return 0;
}

