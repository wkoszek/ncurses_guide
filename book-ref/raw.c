#include <ncurses.h>

int main(void)
{
	initscr();

	raw();
	mvaddstr(0,0,"Type away, raw mode is on:");
	while( getch() != '\n')
			;

	noraw();
	mvaddstr(3,0,"Type away, raw mode is off:");
	while( getch() != '\n')
			;

	endwin();
	return 0;
}

