#include <curses.h>

#define FILENAME "windump"

int main()
{
	int r;

	initscr();

	addstr("Press Enter to restore the screen\n");
	refresh();
	getch();

/* restore the window from disk */
	r = scr_restore(FILENAME);
	if( r == ERR)
		addstr("Error reading window file: press Enter\n");
	refresh();
	getch();

	endwin();
	return 0;
}

