#include <ncurses.h>

#define MAX 0x7f

int main(void)
{
	chtype ch;

	initscr();

	for(ch=0;ch<=MAX;ch++)
		printw("%s\t",unctrl(ch));
	refresh();
	getch();

	endwin();
	return 0;
}

