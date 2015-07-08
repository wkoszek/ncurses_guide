#include <ncurses.h>

#define FILENAME "windump"

int main(void)
{
	int r;

	initscr();

	addstr("Press Enter to restore the screen\n");
	refresh();
	getch();

/* restore the window from disk */
	r = scr_set(FILENAME);
	if( r == ERR)
		addstr("Error reading window file: press Enter\n");
	wrefresh(curscr);
	getch();

	endwin();
	return 0;
}

