#include <ncurses.h>

int main(void)
{
	int ch;
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

