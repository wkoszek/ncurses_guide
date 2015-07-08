#include <ncurses.h>

int main(void)
{
	initscr();
	start_color();
	init_pair(1,COLOR_YELLOW,COLOR_RED);

	bkgdset(A_BOLD);
	addstr("bkgd() has set the background attributes to bold.\n");
	addstr("Press Enter to change it.\n");
	refresh();
	getch();
	
	bkgdset(COLOR_PAIR(1));
	addstr("All done!\n");
	refresh();
	getch();

	endwin();
	return 0;
}

