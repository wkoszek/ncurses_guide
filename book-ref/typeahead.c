#include <ncurses.h>

int main(void)
{
	initscr();
	typeahead(-1);		/* Disable typeahead */

	addstr("All this text will be put to the screen without a\n");
	addstr("keyboard interruption.");
	refresh();
	getch();

	endwin();
	return 0;
}

