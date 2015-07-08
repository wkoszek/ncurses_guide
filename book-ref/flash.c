#include <ncurses.h>

int main(void)
{
	initscr();
	
	addstr("Press any key to flash:\n");
	refresh();
	getch();
	flash();
	addstr("Thanks!\n");
	refresh();
	getch();

	endwin();
	return 0;
}

