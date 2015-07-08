#include <ncurses.h>

int main(void)
{
	initscr();

	addstr("Press any key to beep:\n");
	refresh();
	getch();
	beep();
	addstr("Thanks!\n");
	refresh();
	getch();

	endwin();
	return 0;
}

