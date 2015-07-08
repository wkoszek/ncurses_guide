#include <ncurses.h>

int main(void)
{

	initscr();
	start_color();

	use_default_colors();
	addstr("The default colors have been set to\n");
	addstr("the same as the terminal's colors.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

