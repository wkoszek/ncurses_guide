#include <ncurses.h>

int main(void)
{
	initscr();

	start_color();
	init_pair(1,COLOR_WHITE,COLOR_BLUE);
	init_pair(2,COLOR_GREEN,COLOR_WHITE);
	init_pair(3,COLOR_RED,COLOR_GREEN);
	bkgd(COLOR_PAIR(1));
	addstr("I think that I shall never see\n");
	addstr("a color screen as pretty as thee.\n");
	addstr("For seasons may change\n");
	addstr("and storms may thunder;\n");
	addstr("But color text shall always wonder.");
	refresh();
	getchar();

	bkgd(COLOR_PAIR(2));
	refresh();
	getchar();

	bkgd(COLOR_PAIR(3));
	refresh();
	getchar();
	
	endwin();
	return 0;
}

