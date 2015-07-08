#include <ncurses.h>

int main(void)
{
	char buffer[81];

	initscr();
	intrflush(NULL,FALSE);

	addstr("Type on the keyboard whilst I wait...\n");
	refresh();
	napms(5000);			/* 5 seconds */

	addstr("Here is what you typed:\n");
	getnstr(buffer,80);
	refresh();
	
	endwin();
	return 0;
}

