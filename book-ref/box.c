#include <ncurses.h>

int main(void)
{
	initscr();

	box(stdscr,0,0);
	mvaddstr(1,1,"Ta-da!");
	refresh();
	getch();

	endwin();
	return 0;
}

