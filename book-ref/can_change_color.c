#include <ncurses.h>

int main(void)
{
	bool tf;
	initscr();

	tf =  can_change_color();
	if( tf == TRUE)
		addstr("This terminal can change the standard colors.\n");
	else
		addstr("This terminal cannot change the colors.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

