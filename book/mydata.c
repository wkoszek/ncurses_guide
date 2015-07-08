#include <ncurses.h>

#define COL1 5
#define COL2 38

int main(void)
{
	initscr();

	mvprintw(5,COL1, "%30s", "Your name:");
	mvprintw(5,COL2, "%-30s", "Art Grockmeister");

	mvprintw(7,COL1, "%30s", "Your company:");
	mvprintw(7,COL2, "%-30s", "Sterling/Worbletyme");

	mvprintw(9,COL1, "%30s", "Position:");
	mvprintw(9,COL2, "%-30s", "Grand Duke of Finance");

	mvprintw(11,COL1, "%30s", "Date hired:");
	mvprintw(11,COL2, "%-30s", "October 19, 1993");
	refresh();
	getchar();

	endwin();
	return 0;
}

