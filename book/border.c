#include <curses.h>

int main()
{
	initscr();

	border(0x00ba,0x00ba,0x00cd,0x00cd,
		   0x00c9,0x00bb,0x00c8,0x00bc);
	refresh();
	getch();

	endwin();
	return 0;
}

