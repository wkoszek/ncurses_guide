#include <ncurses.h>

int main(void)
{
	initscr();

	addnstr("The password is 'Zeppelin.'\n",17);
	refresh();
	getch();

	endwin();
	return 0;
}

