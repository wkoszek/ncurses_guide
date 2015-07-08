#include <curses.h>

int main()
{
	initscr();

	box(stdscr,'*','*');
	refresh();
	getch();

	endwin();
	return 0;
}

