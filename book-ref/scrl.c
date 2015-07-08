#include <ncurses.h>

int main(void)
{
	int ch;

	initscr();

	scrollok(stdscr,TRUE);
	keypad(stdscr,TRUE);
	noecho();

	addstr("Press Enter to quit; Up/Down to scroll");
	mvaddstr(LINES/2,0,"Scroll me!");
	refresh();

	do
	{
		ch = getch();
		if(ch == KEY_UP)
			scrl(1);
		if(ch == KEY_DOWN)
			scrl(-1);
	} while( ch != '\n');

	endwin();
	return 0;
}

