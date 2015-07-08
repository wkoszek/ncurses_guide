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
	r = scr_init(FILENAME);
	if( r != ERR)
	{
		scr_restore(FILENAME);
		wrefresh(curscr);
	}
	else
	{
		addstr("Error reading window file: press Enter\n");
		refresh();
	}
	getch();

	endwin();
	return 0;
}

