#include <ncurses.h>

int main(void)
{
	bool tf;
	initscr();

	tf =  has_colors();
	if( tf == TRUE)
		addstr("This terminal can do colors.\n");
	else
		addstr("This terminal cannot do colors.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

