#include <ncurses.h>

int main(void)
{
	int ch = '\0';

	initscr();

	keypad(stdscr,TRUE);
	notimeout(stdscr,FALSE);
	addstr("Press the Esc key and note the delay:\n");
	refresh();
	while( ch != '\n')
		ch = getch();

	ch = '\0';
	notimeout(stdscr,TRUE);
	mvaddstr(3,0,"Now with notimeout TRUE, press Esc:\n");
	refresh();
	while( ch != '\n')
		ch = getch();

	endwin();
	return 0;
}

