#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("Give me a second...");
	refresh();
	napms(1000);
	addstr("...Thanks!\n");
	refresh();
	getch();

	endwin();
	return 0;
}

