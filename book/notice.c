#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("Attention!\n");
	beep();
	refresh();
	getchar();
	addstr("I said, ATTENTION!\n");
	flash();
	refresh();
	getchar();
	endwin();
	return 0;
}

