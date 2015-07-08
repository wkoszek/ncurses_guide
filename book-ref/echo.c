#include <ncurses.h>

int main(void)
{
	int ch;

	initscr();

	addstr("Normally echo is on. Type your name and press Enter:\n");
	refresh();
	while( getch() != '\n')
		;
	
	mvaddstr(2,0,"Now echo is off. Type your name and press Enter:\n");
	refresh();
	noecho();
	while( getch() != '\n')
		;

	mvaddstr(4,0,"Echo is still off, but input is being displayed\n");
	addstr("and manipulated manually. Type your name and press Enter:\n");
	do
	{
		ch = getch();
		addch(toupper(ch));
		refresh();
	} while( ch != '\n');
	
	addstr("Press Enter to quit:");
	refresh();
	getch();

	endwin();
	return 0;
}

