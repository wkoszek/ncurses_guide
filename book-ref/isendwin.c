#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("Press Enter to temporarily suspend this program:\n");
	refresh();
	getch();

	endwin();

	fputs("Program suspended...",stdout);
	if(isendwin())
		fputs("isendwin() returns TRUE...",stdout);
	else
		fputs("isendwin() returns FALSE...",stdout);
	puts("Press Enter:");
	fflush(stdout);
	getch();

	addstr("Now Curses visual mode has been restarted after endwin().\n");
	if(isendwin())
		addstr("isendwin() returns TRUE.\n");
	else
		addstr("isendwin() returns FALSE.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

