#include <ncurses.h>

int main(void)
{
	int ch;
	initscr();

	cbreak();
	mvaddstr(0,0,"Type away, cbreak mode is on:");
	while( getch() != '\n')
			;

	nocbreak();
	mvaddstr(3,0,"Type away, cbreak mode is off:");
	while( getch() != '\n')
			;

	endwin();
	return 0;
}

