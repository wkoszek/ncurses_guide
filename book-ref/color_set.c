#include <ncurses.h>

int main(void)
{
	initscr();
	start_color();

	init_pair(1,COLOR_RED,COLOR_YELLOW);
	color_set(1,NULL);
	addstr("The color of this window is now\n");
	addstr("Red on Yellow.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

