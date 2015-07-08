#include <ncurses.h>

int main(void)
{
	initscr();

	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	bkgd(COLOR_PAIR(1));
	refresh();
	getchar();

	endwin();
	return 0;
}

