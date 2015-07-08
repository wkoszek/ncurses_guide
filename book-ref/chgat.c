#include <ncurses.h>

int main(void)
{
	initscr();
	start_color();
	init_pair(1,COLOR_RED,COLOR_WHITE);
	init_pair(2,COLOR_WHITE,COLOR_BLUE);

	addstr("This is the incredibly boring first line\n");
	addstr("This is the incredibly boring second line\n");
	addstr("This is the incredibly boring third line\n");
	addstr("This is the incredibly boring fourth line\n");
	refresh();
	getch();

	mvchgat(0,0,4,0,1,NULL);
	mvchgat(1,12,10,0,2,NULL);
	mvchgat(2,23,6,A_UNDERLINE,0,NULL);
	mvchgat(3,30,6,A_BOLD,0,NULL);
	touchwin(stdscr);
	refresh();
	getch();

	endwin();
	return 0;
}

