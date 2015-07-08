#include <ncurses.h>

int main(void)
{
	initscr();
	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_YELLOW,COLOR_RED);

	bkgd(COLOR_PAIR(1) | '.');
	refresh();
	getch();

	addstr("bkgd() has preset the background.\n");
	addstr("Press Enter to change it again.\n");
	refresh();
	getch();
	
	bkgd(COLOR_PAIR(2));
	addstr("All done!\n");
	refresh();
	getch();

	endwin();
	return 0;
}

