#include <ncurses.h>

int main(void)
{
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);

	addstr("This is the standard screen as it normally appears.\n");
	addstr("The cursor is synchronized ->");
	refresh();
	getch();

	leaveok(stdscr,TRUE);
	bkgd(COLOR_PAIR(1));
	addstr("\n\nThe cursor is now not being updated.\n");
	addstr("This means that it's position could be anywhere.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

