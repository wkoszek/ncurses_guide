#include <ncurses.h>

int main(void)
{
	bool tf;
	initscr();

	tf =  has_colors();
	if( tf == FALSE)
		addstr("This terminal cannot do colors.\n");
	else
		addstr("This terminal can do colors.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

