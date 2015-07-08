#include <ncurses.h>

int main(void)
{
	char buffer[81];

	initscr();

	addstr("Type on the keyboard whilest I wait...\n");
	refresh();
	napms(5000);			/* 5 seconds */

	addstr("Here is what you typed:\n");
	flushinp();
	getnstr(buffer,80);
	refresh();
	
	endwin();
	return 0;
}

