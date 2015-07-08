#include <ncurses.h>

int main(void)
{
	int b;
	
	initscr();

	b = baudrate();
	printw("This terminal's baud rate is %d.\n",b);
	refresh();
	getch();

	endwin();
	return 0;
}

