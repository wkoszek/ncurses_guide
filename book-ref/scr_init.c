#include <ncurses.h>

#define FILENAME "windump"

int main(void)
{
	int r;

	initscr();
	
	r = scr_init(FILENAME);
	if( r == ERR)
		addstr("Error init'ing filename\n");
	wrefresh(curscr);
	getch();

	endwin();
	return 0;
}

