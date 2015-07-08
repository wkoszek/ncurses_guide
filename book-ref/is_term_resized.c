#include <ncurses.h>

int main(void)
{
	initscr();

	if(is_term_resized(25,80))
		addstr("Term can be resized.\n");
	else
		addstr("Term cannot be resized.\n");
	refresh();
	getch();

	endwin();
	return 0;
}

